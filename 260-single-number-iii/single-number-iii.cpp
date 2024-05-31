class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<int>v;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                i++;
                continue;
            }
            else if(nums[i]!=nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2])
        v.push_back(nums[nums.size()-1]);
        return v;
    }
};