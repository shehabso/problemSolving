class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int i;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(count(nums.begin(), nums.end(), nums[i])==nums.size()/2)
            {
                return nums[i];
            }
        }
        return 0;
    }
};