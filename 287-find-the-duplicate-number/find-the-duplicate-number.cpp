class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>v(nums.size()+1,0);
        v[0]=1;
        for(int x:nums){
            if(v[x]==1)
            return x;
            else v[x]=1;
        }
        return 0;
    }
};