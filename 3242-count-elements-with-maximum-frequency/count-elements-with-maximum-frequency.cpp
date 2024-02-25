class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto x: nums){
            mp[x]++;
        }
        int ma=0;
        for(auto [key,val]:mp){
            ma=max(val,ma);
        }
        int ans=0;
        for(auto [key,val]: mp){
            if(val==ma){
                ans+=val;
            }
        }
        return ans;
    }
};