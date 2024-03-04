class Solution {
public:
    int bagOfTokensScore(vector<int>& v, int p) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(v.size()==1 and p>v[0])
        return 1;
        if(v.size()==0)
        return 0;
        bool b=true;
        sort(begin(v),end(v));
        int ans=0,i=0,j=v.size()-1;
        while(true and i<=j){
            if(v[i]>p and ans<=0)
            break;
            else if(v[i]<=p){
                p-=v[i];
                ans++;
                b=true;
                i++;
            }
            else{
                p+=v[j];
                ans--;
                b=false;
                j--;
            }
        }
        if(b==false)
        ans++;
        return ans;
    }
};