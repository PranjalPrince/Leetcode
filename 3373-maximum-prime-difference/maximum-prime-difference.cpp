auto speedup=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    bool isprime(int num){
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0)
            return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>v(101,0);
        for(int i=2;i<101;i++){
            if(isprime(i))
            v[i]=1;
        }
        int j=0,k=0;
        bool b=true;
        for(int i=0;i<nums.size();i++){
            if(v[nums[i]]==1 and b==true){
                j=i;
                k=i;
                b=false;
            }
            if(v[nums[i]]==1){
                k=i;
            }
        }
        cout<<k<<' '<<j;
        return k-j;
    }
};