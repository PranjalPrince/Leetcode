auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            s.insert(nums[i]);
        }
        return s.size();
    }
};