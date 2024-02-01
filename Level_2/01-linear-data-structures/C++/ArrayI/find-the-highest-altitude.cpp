class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans =0;
        int hight =0;
        for (int i=0;i<gain.size();i++){
        ans+=gain[i];
        if(ans>hight)
        hight=ans;
        }
        return hight;
    }
};