class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sa) {
        stack<int>st;
        for(int i=sa.size()-1;i>=0;i--){
            st.push(sa[i]);
        }
        int c0=0,c1=0;
        for(int i=0;i<stu.size();i++){
            if(stu[i]==0)
            c0++;
            else
            c1++;
        }
        while(true){
            if(st.empty())
            break;
            else if((st.top()==0 and c0==0) or(st.top()==1 and c1==0))
            break;
            else{
                if(st.top()==0){
                c0--;
                st.pop();
                }
                else{
                    c1--;
                    st.pop();
            }
            }
        }
        return st.size();
    }
};