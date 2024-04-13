class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        // int ans=1,i=0,cnt=0;
        // bool b=1;
        // while(i<nums.size()-1){
        //     if(nums[i]==nums[i+1]){
        //     cnt=1;
        //     i++;
        //     }
        //     else if((nums[i]<nums[i+1] and b==1) or (nums[i]>nums[i+1] and b==0)){
        //         cnt++;
        //         ans=max(ans,cnt+1);
        //         i++;
        //     }
        //     else if((nums[i]<nums[i+1] and b==0) or (nums[i]>nums[i+1] and b==1)){
        //         cnt=1;
        //         ans=max(ans,cnt+1);
        //         if(b==1)
        //         b=0;
        //         else b=1;
        //         i++;
        //     }
        // }
        // if(cnt==0)
        // return 1;
        // else return ans;
        int a=0,b=0,ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                a++;
                ans=max(ans,a);
            }
            else a=0;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                b++;
                ans=max(ans,b);
            }
            else b=0;
        }
        return ans+1;
    }
};