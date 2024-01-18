class Solution {
public:
    int fib(int n) {
        int result=0;
        if(n==1 || n==0) return n;
        int p1=1;
        int p2=0;
        for (int i=2;i<=n;i++){
            result=p1+p2;
            p2=p1;
            p1=result;
        }
        return result ;
    }
};