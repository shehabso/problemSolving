class Solution {
public:
    string removeOuterParentheses(string s) {
    int count =0;
     string st ;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
            if(count++){
            st+='(';
            }
            }
            else{
                if(--count){
                  st+=')';  
                }
            }
        }
        return st;
        }
};