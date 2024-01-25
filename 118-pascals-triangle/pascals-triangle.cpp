class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        if(numRows==1){
            for(int i=0;i<1;i++){
                vector<int>v1;
                v1.push_back(1);
                v.push_back(v1);
            }
        }
        else {
           for(int i=0;i<2;i++){
            vector<int>v1;
            for(int j=0;j<i+1;j++){
                v1.push_back(1);
            }
            v.push_back(v1);

        } 
        }
        // if(numRows==1){
        //     vector<int>v1;
        //     v1.push_back(1);
        //     v.push_back(v1);
        //     return v;
        // }
        // else if(numRows==2){
        //     vector<int>v2;
        //     v2.push_back(1);
        //     v2.push_back(1);
        //     v.push_back(v2);
        //     return v;
        // }
        for(int i=2;i<numRows;i++){
            vector<int>v1;
            v1.push_back(1);
            for(int j=1;j<i;j++){
                v1.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            v1.push_back(1);
            v.push_back(v1);
        }
        return v;
    }
};