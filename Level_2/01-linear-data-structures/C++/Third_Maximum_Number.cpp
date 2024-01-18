class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max_1=INT_MIN;
        int max_2=INT_MIN;
        int max_3=INT_MIN;
        int flag =0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]>max_1){
                max_3=max_2;
                max_2=max_1;
                max_1=nums[i];
            }
            else if (nums[i]>max_2 && nums[i]<max_1){
                max_3=max_2;
                max_2=nums[i];
            }
            else if(nums[i]<max_2 && nums[i]>max_3) {
                max_3=nums[i];
            }
            if(nums[i] == INT_MIN) flag = 1;
        }

        if(nums.size() < 3) return max_1;
        if(nums.size() >= 3 && flag == 0 && max_3 == INT_MIN) return max_1;
        if(flag == 1 && max_2 == INT_MIN) return max_1;
        return max_3;
    }
};