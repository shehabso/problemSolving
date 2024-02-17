class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(); // row 
        int m=matrix[0].size() ;//column 
        int top=0,right=m-1,left=0,bottom=n-1;
        int total =m*n;
        int count =0;
    vector <int> ans ;
    while(count <total){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
            count++;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
             count++;
        }
        right --;
        if(top<=bottom){
            for(int i=right ;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
                 count++;
            }
            bottom --;
        }
         if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
                 count++;
            }
            left++;
            }
    }
    return ans;
    }
};