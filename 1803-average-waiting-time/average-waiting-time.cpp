class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cust) {
        // sort(begin(cust),end(cust));
        double t=cust[0][0],ans=0;
        for(int i=0;i<(int)cust.size();i++){
            if(t<cust[i][0]){
                // ans+=cust[i][0]-t;
                t=cust[i][0];
            }
            if(t>cust[i][0]){
                ans+=t-cust[i][0];
            }
            t+=cust[i][1];
            ans+=cust[i][1];
            cout<<t<<' '<<ans<<endl;
        }
        return double((double)ans/(double)cust.size());
    }
};