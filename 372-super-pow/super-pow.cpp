class Solution {
    const int base=1337;
    int powres(int a,int k){
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
        return powres(superPow(a,b),10)*powres(a,last)%base;
    }
};