auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& v1, vector<vector<int>>& v2) {
        vector<vector<int>>ans;
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        sort(begin(v1),end(v1));
        for(auto x:v1) cout<<x[0]<<' '<<x[1]<<"   ";
        for(int i=0;i<v1.size()-1;i++){
            if(v1[i][0]==v1[i+1][0]){
                ans.push_back({v1[i][0],v1[i][1]+v1[i+1][1]});
                i++;
            }
            else
            ans.push_back(v1[i]);
        }
        if(v1[v1.size()-1][0]!=ans[ans.size()-1][0])
        ans.push_back(v1[v1.size()-1]);
        return ans;
    }
};