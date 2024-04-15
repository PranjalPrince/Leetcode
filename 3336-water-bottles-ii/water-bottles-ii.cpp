class Solution {
public:
    int maxBottlesDrunk(int b, int e) {
        int ans=b,emp=b,fb=0;
        while(emp>=e){
            emp-=e;
            ans++;
            emp++;
            e++;
        }
        return ans;
    }
};