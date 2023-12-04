class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int c=0;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] and num[i]==num[i+2] and c<=(num[i]-'0')){

            ans=num.substr(i,3);
            c=num[i]-'0';
            }
        }
        return ans;
        
    }
};