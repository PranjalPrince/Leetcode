class Solution {
public:
    int countKeyChanges(string s) {
        for(int i=0;i<s.size();i++){
            s[i]=(char)tolower(s[i]);
        }
        // cout<<s;
        int ans=0;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1])
            ans++;
        }
        return ans;
    }
};