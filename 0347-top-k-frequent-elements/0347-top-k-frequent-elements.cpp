#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        // Step 1: Count the frequency of each element
        std::unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        
        // Step 2: Create buckets where index represents frequency
        int n = nums.size();
        std::vector<std::vector<int>> buckets(n + 1); // We can have up to n frequencies
        for (auto& [num, freq] : count) {
            buckets[freq].push_back(num);
        }
        
        // Step 3: Gather top k frequent elements
        std::vector<int> result;
        for (int i = n; i > 0 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        
        return result;
    }
};
