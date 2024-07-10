auto speedup=[](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i][0]!='.')
            ans++;
            else if(logs[i]=="../" and ans>0)
            ans--;
        }
        return ans;
    }
};