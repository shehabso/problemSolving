class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> result;
        unordered_map<string ,vector<string>>  mymap ;
        string temp ;
        int outersize =strs.size();
        for (int i=0;i<outersize;i++)  {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(temp);
           
        }
    for (auto itr=mymap.begin();itr!=mymap.end();itr++){
        result.push_back(itr->second);
    }
        return  result;
    }
};