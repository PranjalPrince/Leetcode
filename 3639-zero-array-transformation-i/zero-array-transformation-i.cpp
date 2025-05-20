class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& q) {
        vector<int> v(nums.size(),0);
        for(int i=0;i<q.size();i++){
            v[q[i][0]]+=1;
            if(q[i][1]+1<nums.size()){
                v[q[i][1]+1] -= 1;
            }
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt+=v[i];
            if(cnt<nums[i])
            return false;
        }
        return true;
    }
};