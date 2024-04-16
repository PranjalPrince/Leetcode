class Solution {
public:
    // using i64=int64_t;
    // constexpr i64 mod = 1000000007;
    typedef long long int ll;
    const ll mod=10000000;
    long long countSubstrings(string s, char c) {
        long long res,ans=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                cnt++;
                ans+=cnt;
                // ans= ans%mod;
            }
        }
        return ans;
    }
};