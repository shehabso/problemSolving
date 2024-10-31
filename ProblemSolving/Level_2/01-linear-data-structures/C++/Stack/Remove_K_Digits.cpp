class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st ;
        string str="";
        if(k>num.size()) return "0";
        for (int i=0;i<num.size();i++){
            while (str.length()>0 && str[str.length()-1]>num[i] && k>0){
                    str.pop_back();
                    k--;
                }
                str.push_back(num[i]);  
          
        }
        while(k>0){
            str.pop_back();
            k--;
        }
        int i=0;
    while (i<str.size() && str[i]=='0') i++;
        return (i==str.size()) ?"0" : string(str.begin()+i,str.end());
    }
};