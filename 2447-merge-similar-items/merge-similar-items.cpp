auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        // vector<vector<int>>ans;
        // for(int i=0;i<v2.size();i++){
        //     v1.push_back(v2[i]);
        // }
        // sort(begin(v1),end(v1));
        // for(auto x:v1) cout<<x[0]<<' '<<x[1]<<"   ";
        // for(int i=0;i<v1.size()-1;i++){
        //     if(v1[i][0]==v1[i+1][0]){
        //         ans.push_back({v1[i][0],v1[i][1]+v1[i+1][1]});
        //         i++;
        //     }
        //     else
        //     ans.push_back(v1[i]);
        // }
        // if(v1[v1.size()-1][0]!=ans[ans.size()-1][0])
        // ans.push_back(v1[v1.size()-1]);
        // return ans;
        // vector<vector<int>>ans;
        // map<int,int>mp;
        // for(auto x:v1) mp[x[0]]+=x[1];
        // for(auto x:v2)  mp[x[0]]+=x[1];
        // for(auto [key,val]:mp){
        //     ans.push_back({key,val});
        // }
       
        // return ans;
        map<int,int> mp;
        vector<vector<int>> ans;
        for(int i=0;i<items1.size();i++){
            mp[items1[i][0]]=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            mp[items2[i][0]]+=items2[i][1];
        }
        vector<int> temp;
        for(auto i:mp){
            temp.push_back(i.first);
            temp.push_back(i.second);
            ans.push_back(temp);
            temp.pop_back();
            temp.pop_back();
        }
        return ans;
    }
};