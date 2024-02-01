class Solution {
public:
int findIndex(int val ,vector<int> p){
    for (int i=0;i<p.size();i++){
        if(p[i]==val) return i;
    }
    return -1;
}
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> marray;
        int number =0;
        int n =queries.size();
        for (int i=1;i<=m;i++){
            marray.push_back(i);
        }
        for (int i=0;i<n;i++){
            number =queries[i];
            int idx=findIndex(queries[i],marray);
            queries[i]=idx;
            marray.erase(marray.begin()+idx);
            marray.insert(marray.begin(),number);
        }

        return queries ;
    }
};