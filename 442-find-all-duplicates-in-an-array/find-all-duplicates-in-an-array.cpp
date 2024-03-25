class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2)
            ans.push_back(nums[i]);
        }
        return ans;
    }
};