class Solution {
public:
int solve(int i,int result ,int n ,vector<int> &nums){
    if(n==i) return result ;
    return solve(i+1,result^nums[i],n,nums)+solve(i+1,result,n,nums);
}
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        return solve(0,0,n,nums);
    }
};