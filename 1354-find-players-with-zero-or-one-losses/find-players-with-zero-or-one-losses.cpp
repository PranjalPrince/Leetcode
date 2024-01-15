class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        vector<int>v2,v3;
        set<int>s;
        map<int,int>mp,mp2;
        for(int i=0;i<m.size();i++){
            mp2[m[i][0]]++;
            v2.push_back(m[i][1]);
        }
        for (auto x: v2){
            mp2[x]=0;
        }
        for(auto [key,val]:mp2){
            if(val>0)
            v3.push_back(key);
        }
        for(int i=0;i<v2.size();i++){
            mp[v2[i]]++;
        }
        vector<vector<int>>ans;
        ans.push_back(v3);
        v3.clear();
        for(auto [key,val]:mp){
            if(val==1)
            v3.push_back(key);
        }
        ans.push_back(v3);
        return ans;
    }
};