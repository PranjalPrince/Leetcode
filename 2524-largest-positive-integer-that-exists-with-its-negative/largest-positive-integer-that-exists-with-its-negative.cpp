auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int m=-1;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==-(nums[j]))
                m=max(abs(nums[i]),m);
            }
        }
        return m;
    }
};