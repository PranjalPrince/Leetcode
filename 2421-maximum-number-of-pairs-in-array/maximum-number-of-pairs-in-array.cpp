auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int cnt=0;
        for(auto [key,val]:mp){
            cnt+=val/2;
        }
        vector<int>ans;
        ans.push_back(cnt);
        ans.push_back(nums.size()-(cnt*2));
        return ans;
    }
};