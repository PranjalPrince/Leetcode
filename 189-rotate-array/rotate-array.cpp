class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int cnt;
        // for(int i=0;i<k;i++){
        //     cnt=nums[nums.size()-1];
        //     for(int j=nums.size()-1;j>0;j--){
        //         nums[j]=nums[j-1];
        //     }
        //     // cout<<cnt;
        //     nums[0]=cnt;
        // }
        // return;
        vector<int>v;
        int n=k%nums.size();
        int cnt=0,j=0;
        for(int i=nums.size()-n;i<nums.size();i++){
            v.push_back(nums[i]);
            cnt++;
        }
        while(cnt<nums.size()){
            v.push_back(nums[j]);
            cnt++;
            j++;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }
        return;
    }
};