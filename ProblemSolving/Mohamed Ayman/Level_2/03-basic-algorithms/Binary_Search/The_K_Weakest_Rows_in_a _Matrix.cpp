class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         vector<pair<int,int>> v;
        vector<int> ans;
        for(int i=0;i<mat.size();++i)
        {
            int sum=0;
            for(int j=0;j<mat[i].size();++j)
                sum+=mat[i][j];
            v.push_back({sum,i});
        }
        //  for (const auto& pair : v)
        //  cout<<pair.first;
        sort(v.begin(),v.end());
        for(int i=0;i<k;++i)
            ans.push_back(v[i].second);
        return ans;
    }
};