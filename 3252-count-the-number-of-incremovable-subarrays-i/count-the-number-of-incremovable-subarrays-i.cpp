class Solution {
public:
    bool check(vector<int>tep){
        for(int i=1;i<tep.size();i++){
            if(tep[i]<=tep[i-1]) return false;
        }
        return true;
    }
    int incremovableSubarrayCount(vector<int>& nums) {
        int n=nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>tep;
                for(int k=0;k<i;k++){
                    tep.push_back(nums[k]);
                }
                for(int k=j+1;k<n;k++){
                    tep.push_back(nums[k]);
                }
        
                if(check(tep)){
                    ans++;
                }
            }
        }
        return ans;
    }

};