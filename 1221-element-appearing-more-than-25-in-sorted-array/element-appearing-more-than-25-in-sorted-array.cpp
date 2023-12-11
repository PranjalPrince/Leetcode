class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double a=arr.size()/4;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto [key,val]: mp){
            if(double(val)>a)
            return int(key);
        }
        return -1;
    }
};