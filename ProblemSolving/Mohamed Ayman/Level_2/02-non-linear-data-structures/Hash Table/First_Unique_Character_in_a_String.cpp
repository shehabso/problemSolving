class Solution {
public:
    int firstUniqChar(string s) {
        
        for(int i=0;i<s.size();i++){
            int v=0;
           for (int j=0;j<s.size();j++){
               if(s[i]==s[j] && i!=j){
                   v=1;
                   break;
               }
           }
           if(v==0) return i;
        }
        return -1;
    }
};