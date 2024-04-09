class Solution {
public:
    int findMinDifference(vector<string>& tp) {
        vector<int>v,v2;
        int n=1440;
        for(int i=0;i<tp.size();i++){
            int a=stoi(tp[i].substr(0,2));
            int b=stoi(tp[i].substr(3,2));
            int c1,c2;
            v.push_back(a*60+b);
        }
        int ans=INT_MAX;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(i!=j){
                    ans=min(ans,abs(v[i]-v[j]));
                    ans=min(ans,1440-abs(v[i]-v[j]));
                }
            }
        }
        return ans;
    }
};