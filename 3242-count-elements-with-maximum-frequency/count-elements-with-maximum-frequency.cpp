class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans=0;
        int m=0;
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto [key,val]:mp){
            if(m<val){
                m=val;
                ans=val;
            }
            else if(m==val){
                ans+=val;
            }
        }
        return ans;
    }
};