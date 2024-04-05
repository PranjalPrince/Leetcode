class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(st.empty())
            st.push(s[i]);
            else if((st.top()-'a'+'A')==s[i]or (st.top()==s[i]-'a'+'A'))
            st.pop();
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};