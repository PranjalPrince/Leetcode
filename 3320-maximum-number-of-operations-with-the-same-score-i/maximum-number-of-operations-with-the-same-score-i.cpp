class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int a=nums[0]+nums[1];
        int ans=1;
        for(int i=3;i<nums.size();i+=2){
            if(nums[i]+nums[i-1]==a){
            ans++;
            }
            else break;
        }
        return ans;
    }
};