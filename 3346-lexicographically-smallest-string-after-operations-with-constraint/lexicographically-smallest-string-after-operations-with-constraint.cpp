class Solution {
public:
    string getSmallestString(string s, int k) {
        int i=0;
        while(k>0 and i<s.size()){
            if(s[i]=='a'){
                i++;
                continue;
            }
            int a=s[i]-'a',b='z'-s[i]+1;
            if(min(a,b)<=k){
                s[i]='a';
                k-=min(a,b);
            }
            else{
                s[i]=char(int(s[i])-k);
                k=0;
            }
            i++;
        }
        return s;
    }
};