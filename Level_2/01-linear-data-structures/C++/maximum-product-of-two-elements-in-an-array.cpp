class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_1=0;
        int max_2=0;
        for (int i=0;i<nums.size();i++){
            if(max_1<=nums[i]){
                max_2=max_1;
                max_1=nums[i];
            }
            else if(nums[i]>max_2){
                max_2=nums[i];
            }        
        }
        return abs ((max_1-1))*abs((max_2-1));
    }
};