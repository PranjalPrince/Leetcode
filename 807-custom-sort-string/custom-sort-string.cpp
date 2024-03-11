class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        vector<char>v;
        v.push_back('a');
        char ch='z'+1;
        for(int i=1;i<26;i++){
            v.push_back('a'+i);
        }
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<order.size();i++){
            for(int j=0;j<mp[order[i]];j++){
                ans+=order[i];
                // mp[order[i]]--;
            }
            mp[order[i]]=0;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>0){
                ans+=s[i];
                mp[s[i]]--;
            }
        }
        return ans;
    }
};