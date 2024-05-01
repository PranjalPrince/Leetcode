auto speed=[](){
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
return 0;
}();
class Solution {
    const int base=1337;
    int powback(int a,int k){
        a%=base;
        int result=1;
        for(int i=0;i<k;i++){
            result=(result*a)%base;
        }
        return result;
    }
public:
    int superPow(int a, vector<int>& b) {
        if(b.empty()) return 1;
        int last=b.back();
        b.pop_back();
        return powback(superPow(a,b),10)*powback(a,last)%base;
    }
};