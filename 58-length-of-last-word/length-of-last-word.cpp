class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        bool f=1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' and f==0)
            break;
            else if(s[i]!=' '){
                ans++;
                f=0;
            }
        }
        return ans;
    }
};