class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int>v(100000,0);
        // if(nums.size()==1){
        //     return nums[0]+1;
        // }
        bool b=false;
        int sum=nums[0];
        v[nums[0]]=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1 and b==false){
                b=true;
                v[nums[i]]=1;
            }
            if(nums[i]==nums[i-1]+1 and b==false){
                sum+=nums[i];
                v[nums[i]]=1;
            }
            v[nums[i]]=1;
        }
        int ans=0;
        while(true){
            if(v[sum]==1)
            sum++;
            else{
                ans=sum;
                break;
            }
        }
        return ans;
    }
};