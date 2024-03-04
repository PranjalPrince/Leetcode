class Solution {
public:
    int hIndex(vector<int>& v) {
        sort(rbegin(v),rend(v));
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>=ans+1)
            ans++;
            else break;
        }
        return ans;
    }
};