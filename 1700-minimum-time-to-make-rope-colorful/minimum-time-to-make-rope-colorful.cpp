class Solution {
public:
    int minCost(string col, vector<int>& time) {
        int m=time[0], ans=0;
        char t=col[0];

        for(int i=1;i<col.size();i++){
            if(t==col[i]){
                ans+=min(m,time[i]);
                m=max(time[i],m);
            }
            else {
                t=col[i];
                m=time[i];
            }
        }
        return ans;
    }
};