auto speed=[](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cust) {
        double t=cust[0][0],ans=0;
        for(int i=0;i<(int)cust.size();i++){
            if(t<cust[i][0]){
                t=cust[i][0];
            }
            if(t>cust[i][0]){
                ans+=t-cust[i][0];
            }
            t+=cust[i][1];
            ans+=cust[i][1];
        }
        return double((double)ans/(double)cust.size());
    }
};