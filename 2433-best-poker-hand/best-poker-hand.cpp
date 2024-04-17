auto speedup=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<int,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<suits.size();i++){
            mp2[suits[i]]++;
        }
        for(auto x:ranks) mp1[x]++;
        for(auto [key,val]:mp2){
            if(val==5)
            return "Flush";
        }
        int m=0;
        for(auto [key,val]:mp1){
            m=max(m,val);
        }
        if(m>=3)
        return "Three of a Kind";
        else if(m==2)
        return "Pair";
        else
        return "High Card";
    }
};