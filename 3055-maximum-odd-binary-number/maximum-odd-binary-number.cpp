class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt=count(s.begin(),s.end(),'1');
        string ans="";
        for(int i=0;i<cnt-1;i++){
            ans+='1';
        }
        for(int i=cnt;i<s.size();i++){
            ans+='0';
        }
        ans+='1';
        return ans;
    }
};