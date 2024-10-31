class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
     
     int count =0;
 set<char>v(allowed.begin(),allowed.end());
     int  flag =0;
     for(auto it:words)
        {
            flag=0;
            for(auto ch:it)
            {
                if(v.find(ch)==v.end())
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            count++;
        }
        return count;
    }
};