class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        map<char,int>mp;
        for(int i=0;i<words2.size();i++){
            map<char,int>mp2;
            for(int j=0;j<words2[i].size();j++){
                mp2[words2[i][j]]++;
                mp[words2[i][j]]=max(mp2[words2[i][j]],mp[words2[i][j]]);
            }
        }

        vector<string>ans;
        for(int i=0;i<words1.size();i++){
            map<char,int>mp2;
            for(int j=0;j<words1[i].size();j++){
                mp2[words1[i][j]]++;
            }
            bool b=false;
            for(auto [key,val]:mp){
                if(mp[key]>mp2[key] and val>0)
                b=true;
            }
            if(b==false)
            ans.push_back(words1[i]);
        }
        return ans;
        
    }
};