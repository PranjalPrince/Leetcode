auto speedup=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int a=abs(nums[0]),b=nums[0];
        for(int i=1;i<nums.size();i++){
            if(a>abs(nums[i])){
                b=nums[i];
                a=abs(nums[i]);
            }
        }
        if(find(begin(nums),end(nums),abs(b))!=nums.end())
        b=abs(b);
        return b;
    }
};