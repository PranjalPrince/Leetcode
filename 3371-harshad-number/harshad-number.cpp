class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n=0,b=x;
        while(b>0){
            n+=b%10;
            b/=10;
        }
        if(x%n==0)
        return n;
        else 
        return -1;
    }
};