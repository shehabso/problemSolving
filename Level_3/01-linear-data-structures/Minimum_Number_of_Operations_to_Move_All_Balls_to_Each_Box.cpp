class Solution {
public:
    vector<int> minOperations(string boxes) {
        int sum =0;
        vector <int> ans;
        for (int i=0;i<boxes.size();i++){
              sum=0;
            for (int j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    sum+=abs(i-j);
                }
        }
        ans.push_back(sum);
    }
    return ans ;
    }
};