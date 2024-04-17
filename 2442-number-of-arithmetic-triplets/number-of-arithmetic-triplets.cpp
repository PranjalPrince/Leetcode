auto speed=[](){
    ios_base:: sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt=0;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[k]-nums[j]==diff and nums[j]-nums[i]==diff)
                    cnt++;
                }
            }
        }
        return cnt;
    }
};