class Solution {
public:
    int minOperations(string s) {

        int number=s[0];
        int count_0 =0;
        int count_1 =0;
        for(int i=0;i<s.size();i++){

            if(s[i]==number){
                count_0++;
                number^=1;
            }
            else{
                count_1++;
                number^=1;
            }
        }
        cout<<count_0<<count_1;
        return min(count_1,count_0) ;


    }
};