class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
 int i, j, k, min, max, minind, maxind;
        vector<int> ans;
        for(i=0 ; i<matrix.size() ; i++)
        {
            min = 1000000;
            max = -1;
            for(j=0 ; j<matrix[i].size() ; j++)
            {
                if(matrix[i][j]<min)
                {
                    min = matrix[i][j];
                    minind = j;
                }
            }
            for(j=0 ; j<matrix.size() ; j++)
            {
                if(matrix[j][minind]>max)
                {
                    max = matrix[j][minind];
                }
            }
            if(max==min)
            {
                ans.push_back(min);
            }
        }
        return ans;
    }
};