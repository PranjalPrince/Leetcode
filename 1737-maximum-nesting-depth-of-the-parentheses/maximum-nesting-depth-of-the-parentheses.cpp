class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int ans=INT_MIN,c=0;
        if (s.size()==1 and  !isalnum(s[0]))
        return 0;
        else{
            for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    st.push('(');
                    c++;
                }
                else if(s[i]==')'){
                    ans=max(ans,c);
                    st.pop();
                    c--;
                }
                else{
                    ans=max(ans,c);
                }
            }
        }
        return ans;
    }
};