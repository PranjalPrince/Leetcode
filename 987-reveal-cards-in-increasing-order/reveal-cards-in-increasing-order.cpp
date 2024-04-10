class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int cnt=0,j=0;
        vector<int>ans(deck.size(),0);
        sort(begin(deck),end(deck));
        bool b=1;
        while(cnt<deck.size()){
            for(int i=0;i<ans.size();i++){
                if(ans[i]==0 and b==1){
                    ans[i]=deck[j];
                    b=0;
                    j++;
                    cnt++;
                }
                else if(ans[i]==0 and b==0)
                b=1;
            }
        }
        return ans;
    }
};