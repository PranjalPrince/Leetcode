class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int a=0,ans=0;
        for(int i=0;i<nums.size();i++){
            a+=nums[i];
            if(a==0)
            ans++;
        }
        return ans;
    }
};