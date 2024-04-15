auto speedup= [](){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int minimumLevels(vector<int>& p) {
        vector<int>v1,v2;
        for(int i=0;i<p.size();i++){
            if(p[i]==0)
            p[i]=-1;
        }
        v1.push_back(p[0]);
        for(int i=1;i<p.size();i++){
            v1.push_back(v1[v1.size()-1]+p[i]);
        }
        v2.push_back(p[p.size()-1]);
        for(int i=p.size()-2;i>=0;i--){
            v2.push_back(v2[v2.size()-1]+p[i]);
        }
        reverse(begin(v2),end(v2));
        for(int i=0;i<v1.size()-1;i++){
            if(v1[i]>v2[i+1])
            return i+1;
        }
        return -1;
    }
};