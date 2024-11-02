class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        //   -4 -1 -1 0 1 2  
        //    i  j        k  sum<0
        //    i       j   k  sum<0
        //    i         j k  sum<0
        //       i  j     k  sum=0
        //       i    j   k  sum>0
        //       i    j k    sum=0



        vector<vector<int>> result;
        if (nums.size() < 3) {
            return result;
        }

        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    while (nums[left] == nums[left - 1] && left < right)
                        left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return result;
    }
};