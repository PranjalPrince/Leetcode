class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int>mp;
        int i=0,j=0,ans=0;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp[s[j]]>2){
                while(mp[s[j]]>2){
                    mp[s[i]]--;
                    i++;
                }
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};