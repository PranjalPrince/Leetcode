class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& p, int w) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(p.begin(),end(p));
        int ans=0,last=-1;;
        for(auto x:p){
            if(x[0]>last){
                ans++;
                last=x[0]+w;
            }
        }
        return ans;
    }
};