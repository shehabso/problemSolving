class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        if(nums.size()<4) return {};
        set <vector<int>> ans ;
        long int first_target ,second_target =0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
       
    for ( int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            first_target=nums[i]+nums[j];
            int p=j+1,q=n-1;
            while (p<q){
                second_target=nums[p]+nums[q];
                if(first_target+second_target==target){
                    ans.insert({nums[i],nums[j],nums[p],nums[q]});
                    p++;
                }
                else if(first_target+second_target<target) p++;
                else if (first_target+second_target>target) q--;
            }
        }
    }
       vector <vector <int>> result (ans.begin(),ans.end());
    return result ;
    }
};