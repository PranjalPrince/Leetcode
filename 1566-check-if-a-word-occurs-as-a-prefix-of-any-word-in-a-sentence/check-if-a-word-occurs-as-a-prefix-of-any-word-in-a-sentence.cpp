class Solution {
public:
    int isPrefixOfWord(string s, string sw) {
        int l=sw.size(),cnt=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')
            cnt++;
            if(s[i]==' ' or i==0){
                string st="";
                if(i!=0)
                st=s.substr(i+1,l);
                else if(i==0)
                st=s.substr(i,l);
                if(st==sw)
                return cnt;
            }
        }
        return -1;
    }
};