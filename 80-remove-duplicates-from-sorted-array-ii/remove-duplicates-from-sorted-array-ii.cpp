class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]<2)
            mp[nums[i]]++;
        }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>0){
                nums[j]=nums[i];
                mp[nums[i]]--;
                j++;
            }
        }
        cout<<j;
        int i=nums.size()-1;
        while(i!=j-1){
            nums.pop_back();
            i--;
        }
        return nums.size();
    }
};