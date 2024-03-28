class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        map<int,int>mp;
        int i=0,j=0,l=0,val=nums[0];
        while(j<nums.size()){
            if(mp[val]>k and i<j){
                mp[nums[i]]--;
                i++;
            }
            else {
                mp[nums[j]]++;
                val=nums[j];
                if(mp[val]<=k)
                l=max(l,j-i+1);
                j++;
            }
        }
        return l;
    }
};