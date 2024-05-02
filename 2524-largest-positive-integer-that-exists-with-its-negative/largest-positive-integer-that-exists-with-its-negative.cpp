auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        // int m=-1;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==-(nums[j]))
        //         m=max(abs(nums[i]),m);
        //     }
        // }
        // return m;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();i++){
            if(count(nums.begin(),end(nums),-nums[i])>0)
            return abs(nums[i]);
        }
        return -1;
    }
};