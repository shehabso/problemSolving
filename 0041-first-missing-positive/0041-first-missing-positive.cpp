class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int number = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                nums[i] = 0;
            } else if (number == nums[i] ) {
                number ++;
            }
        }
        return number;
    }
};