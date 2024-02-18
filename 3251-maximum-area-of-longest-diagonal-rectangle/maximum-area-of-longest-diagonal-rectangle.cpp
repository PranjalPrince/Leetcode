class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        vector<int>v;
        int m=INT_MIN;
        int ind=-1;
        for(int i=0;i<d.size();i++){
            int a=d[i][0]*d[i][0]+d[i][1]*d[i][1];
            v.push_back(a);
            if(a>m){
                m=a;
                ind=i;
            }
        }
        vector<int>ar;
        for(int i=0;i<v.size();i++){
            if(v[i]==m){
                ar.push_back(d[i][0]*d[i][1]);
            }
        }
        int ans=ar[0];
        for(int i=0;i<ar.size();i++){
            ans=max(ar[i],ans);
        }
        return ans;
    }
};