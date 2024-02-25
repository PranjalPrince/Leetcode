class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int>v;
        for(int i=0;i<matrix[0].size();i++){
            int m=0;
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][i]>m)
                m=matrix[j][i];
            }
            v.push_back(m);
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==-1)
                matrix[i][j]=v[j];
            }
        }
        return matrix;
    }
};