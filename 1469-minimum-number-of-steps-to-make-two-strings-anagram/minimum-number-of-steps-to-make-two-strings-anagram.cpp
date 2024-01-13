class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp1,mp2;
        for(auto x:s)
        mp1[x]++;
        for(auto x:t)
        mp2[x]++;
        int sum=0;
        for(auto [key,val]:mp2){
            mp1[key]-=val;
        }
        char ch='a';
        for(int i=1;i<=26;i++){
            sum+=abs(mp1[ch]);
            ch++;
        }
        return sum/2;
    }
};