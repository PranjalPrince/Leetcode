class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<int>v1,v2;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mat[v1[i]][j]=0;
            }
        }
        for(int i=0;i<v2.size();i++){
            for(int j=0;j<mat.size();j++){
                mat[j][v2[i]]=0;
            }
        }
    }
};