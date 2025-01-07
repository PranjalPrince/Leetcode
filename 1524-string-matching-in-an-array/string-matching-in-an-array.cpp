class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            bool b=false;
            for(int j=0;j<words.size();j++){
                if(i!=j and words[i].size()<words[j].size()){
                    for(int k=0;k<words[j].size()-words[i].size()+1;k++){
                        string s=words[j].substr(k,words[i].size());
                        if(s==words[i])
                        {  
                            ans.push_back(s);
                            b=true;
                            break;
                        }
                    }
                }
                if(b==true)
                break;
            }
        }
        return ans;
    }
};