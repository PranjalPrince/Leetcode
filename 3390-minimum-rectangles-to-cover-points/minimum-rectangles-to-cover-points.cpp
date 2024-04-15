class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& p, int w) {
        set<int>s;
        for(int i=0;i<p.size();i++){
            s.insert(p[i][0]);
        }
        vector<int>v;
        // map<int,int>mp;
        for(auto x:s){
            v.push_back(x);
            // mp[x]=1;
        }
        int  last=-1,ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>last){
                ans++;
                last=v[i]+w;
            }
        }
        return ans;
    }
};