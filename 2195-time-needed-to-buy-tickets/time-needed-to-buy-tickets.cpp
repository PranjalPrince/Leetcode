class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int ans=0, a=t[k];
        for(int i=0;i<t.size();i++){
            if(i<=k){
                ans+=min(t[k],t[i]);
            }
            else{
                if(t[k]>t[i])
                ans+=t[i];
                else
                ans+=t[k]-1;
            }
        }
        return ans;
    }
};