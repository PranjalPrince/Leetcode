class Solution {
public:
    int minOperations(string s) {
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]=='1')
                a++;
            }
            else{
            if(s[i]=='0')
            a++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]=='0')
                b++;
            }
            else{
                if(s[i]=='1')
                b++;
            }
        }
        cout<<a<<' '<<b;
        return min(a,b);
    }
};