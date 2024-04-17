auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0)
        return n;
        else
        return n*2;
    }
};