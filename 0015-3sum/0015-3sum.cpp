class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // the first thing make a 3 pionter
        // -1   0  1  2  -1  -4
        //   i   j             k

        sort(nums.begin(),nums.end());
        int n = nums.size();
        int target=0;
       
        set<vector<int> > s;
        vector <vector <int> > res;
        for (int i = 0; i < n; i++) {
            int j = i + 1;
            int k = n - 1;
            while (k>j){
                int sum =nums[i]+nums[j]+nums[k];
                if(sum==target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if (sum < target){
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        for(auto triplets : s) {res.push_back(triplets);}
        return res;
    }
};