auto speedrun=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char,int>mp;
        vector<int>v;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        for(auto [key,val]:mp){
            v.push_back(val);
        }
        // int n;
        sort(begin(v),end(v));
        if(v.size()==1)
        return 0;
        for(auto x: v) cout<<x<<' ';
        int ans=INT_MAX;
        for(int i=v[0];i<=v[v.size()-1];i++){
            int cnt=0;
            for(int j=0;j<v.size();j++){
                if(v[j]<i){
                    cnt+=v[j];
                }
                else if(v[j]>=i+k){
                    cnt+=v[j]-(i+k);
                }
            }
            // int n=word.size()-cnt;
            ans=min(ans,cnt);
        }
        return ans;
    }
};