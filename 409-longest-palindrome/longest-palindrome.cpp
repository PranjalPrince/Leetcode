class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        bool b=false;
        for(auto [key,val]:mp){
            if(val%2==1)
            b=true;
            ans+=val/2;
        }
        if(b==true)
        return (ans*2)+1;
        else 
        return ans*2;
    }
};