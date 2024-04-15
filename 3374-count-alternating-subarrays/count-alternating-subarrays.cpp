class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans=1;
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(v[v.size()-1]==nums[i]){
                v.clear();
                v.push_back(nums[i]);
                ans+=v.size();
            }
            else{
                v.push_back(nums[i]);
                ans+=v.size();
            }
        }
        return ans;
    }
};