class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int>my_map;
        for(int i=0;i<nums.size();i++){
            my_map[nums[i]]++;
        }
        for (auto num:my_map){
            if(num.second>nums.size()/3) res.push_back(num.first);
        }
        
        return res;
    }
};