auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            a++;
            else if(nums[i]==1)
            b++;
            else c++;
        }
        int j=0;
        for(int i=0;i<a;i++){
            nums[j]=0;
            j++;
        }
        for(int i=0;i<b;i++){
            nums[j]=1;
            j++;
        }
        for(int i=0;i<c;i++){
            nums[j]=2;
            j++;
        }
    }
};