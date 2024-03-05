class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(i<j and s[i]==s[j]){
            char ch=s[i];
                while(ch==s[i] and i<=j){
                    i++;
                }
                while(ch==s[j] and i<=j){
                    j--;
                }
        }
        return j-i+1;
    }
};