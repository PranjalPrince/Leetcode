class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // int a=INT_MAX,b=INT_MAX;
        // int c,d;
        // for(int i=0;i<nums.size();i++){
        //     if(a>nums[i]){
        //         b=a;
        //         a=nums[i];
        //         d=c;
        //         c=i;
        //     }
        //     else if(b>nums[i]){
        //         b=nums[i];
        //         d=i;
        //     }
        // }
        // vector<int>ans;
        // ans.push_back(nums[d]);
        // ans.push_back(nums[c]);
        // for(int i=0;i<nums.size();i++){
        //     if(i==d or i==c)
        //     continue;
        //     ans.push_back(nums[i]);
        // }
        // return ans;
        vector<int>v=nums;
        sort(v.begin(),v.end());
        vector<int>v1,v2;
        for(int i=0;i<v.size();i++){
            v1.push_back(v[i]);
            if(i==v.size()-1)
            break;
            i++;
            v2.push_back(v[i]);
        }
        vector<int>ans;
        for(int i=0;i<v2.size();i++){
            ans.push_back(v2[i]);
            ans.push_back(v1[i]);
        }
        // if(v.size()%2!=0){
        //     ans.push_back(v1.size()-1);
        // }
    return ans;
    }
};