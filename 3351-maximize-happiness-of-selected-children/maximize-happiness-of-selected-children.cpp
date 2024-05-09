auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        long long ans=0;
        int a=0;
        sort(rbegin(h),rend(h));
        for(int i=0;i<k;i++){
            if(h[i]-a<=0)
            break;
            else{
                ans+=h[i]-a;
                a++;
            }
        }
        return ans;
    }
};