class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // for(int i=1;i<nums.size()-1;i++){
        //     // vector<int>v(nums.size(),false);
        //     int cnt=1;
        //     for(int j=0;j<i;j++){
        //         if(nums[i]>nums[j]){
        //         cnt++;
        //         break;
        //         }
        //     }
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]<nums[j]){
        //         cnt++;
        //         break;
        //         }
        //     }
        //     if(cnt>=3)
        //     return true;
        // }
        // return false;
        int a=INT_MAX,b=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=a)
            a=nums[i];
            else if(nums[i]<=b)
            b=nums[i];
            else return true;
        }
        return false;
    }
};