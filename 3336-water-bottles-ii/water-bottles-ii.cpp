class Solution {
public:
    int maxBottlesDrunk(int b, int e) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        int ans=b,emp=b;
        while(emp>=e){
            emp-=e;
            ans++;
            emp++;
            e++;
        }
        return ans;
    }
};