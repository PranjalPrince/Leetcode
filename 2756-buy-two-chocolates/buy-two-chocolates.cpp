class Solution {
public:
    int buyChoco(vector<int>& prices, int m) {
        sort(prices.begin(),prices.end());
        int a=prices[0]+prices[1];
        if(a>m)
        return m;
        else return m-a;
    }
};