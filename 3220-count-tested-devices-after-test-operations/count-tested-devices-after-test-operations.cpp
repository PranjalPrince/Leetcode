class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        int cnt=0;
        for(int i=0;i<bp.size();i++){
            if(bp[i]-cnt>0)
            cnt++;
        }
        return cnt;
    }
};