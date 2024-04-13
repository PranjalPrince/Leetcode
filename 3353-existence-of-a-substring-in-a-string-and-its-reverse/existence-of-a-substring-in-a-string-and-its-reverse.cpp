class Solution {
public:
    bool isSubstringPresent(string s) {
        string rev=s;
        reverse(begin(rev),end(rev));
        for(int i=0;i<s.size()-1;i++){
            for(int j=0;j<rev.size()-1;j++){
                string s1=s.substr(i,2);
                string s2=rev.substr(j,2);
                if(s1==s2)
                return true;
            }
        }
        return false;
    }
};