#include<bitset>
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // bitset<32> b1(left);
        // for(int i=left+1;i<=right;i++){
        //     bitset<32> b2(i);
        //     b1= b1 & b2;
        // }
        // return b1.to_ulong();
        // int a=left;
        // for(int i=left+1;i<=right;i++){
        //     a=a&i;
        // }
        // return a;
        int cnt=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            cnt++;
        }
        return left<<cnt;
    }
};