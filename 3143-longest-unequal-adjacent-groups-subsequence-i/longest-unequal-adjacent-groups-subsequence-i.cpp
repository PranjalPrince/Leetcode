class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        ans.push_back(words[0]);
        int a=groups[0];
        for(int i=1;i<groups.size();i++){
            if(groups[i]!=a){
                ans.push_back(words[i]);
                a=groups[i];
            }
        }
        return ans;
    }
};