class Solution {
public:
    bool isPerfectSquare(int num) {
       long long  l=0,r=num,ans;
        while(l<=r){
            long long ans = l+(r-l)/2;
            if(ans*ans==num) return 1;
            else if(ans*ans>num) r=ans-1;
            else if (ans*ans<num) l=ans+1;
            else return 0;
        }
        return 0;
    }
};