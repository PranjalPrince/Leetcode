class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        long a=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
                continue;
            }
            a*=nums[i];
        }
        if(cnt>1){
            for(auto x:nums){
                ans.push_back(0);
            }
        }
        else if(cnt==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0)
                ans.push_back(0);
                else
                ans.push_back(a);
            }
        }
        else{
            ans.push_back(a/nums[0]);
            a/=nums[0];
            for(int i=1;i<nums.size();i++){
                a*=nums[i-1];
                a/=nums[i];
                ans.push_back(a);
            }
        }
        return ans;
    }
};