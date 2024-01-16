class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int result = 0;        
        for (int i = 0; i < arr.size(); i++) {
            int endingHere = i + 1;
            int startingHere = arr.size() - i;
            int totalSubarrays = endingHere * startingHere;
            int oddSubarrays = totalSubarrays / 2;
            if (totalSubarrays % 2 == 1) {
                oddSubarrays++;
            }
            result += oddSubarrays * arr[i];
        }
        
        return result;
    }
};