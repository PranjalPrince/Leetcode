auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        vector<int>ord=score;
        sort(rbegin(ord),rend(ord));
        for(int i=0;i<score.size();i++){
            int ind;
            for(int j=0;j<ord.size();j++){
                if(ord[j]==score[i]){
                    ind=j+1;
                }
            }
            string s;
            if(ind==1){
                s="Gold Medal";
            }
            else if(ind==2){
                s="Silver Medal";
            }
            else if(ind==3){
                s="Bronze Medal";
            }
            else {
                s=to_string(ind);
            }
            ans.push_back(s);
        }
        return ans;
    }
};