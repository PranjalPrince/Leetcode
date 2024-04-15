auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        // ios_base::sync_with_stdio(0);
        // cin.tie(NULL);
        // cout.tie(NULL);
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