
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>v;
        for(auto [key,val]:mp){
            v.push_back(val);
        }
        
        sort(begin(v),end(v));
        for(auto x:v)
        cout<<x<<' ';
        cout<<endl;
        for(int i=0;i<v.size();i++){
            if(v[i]<k)
            k-=v[i];
            else if(v[i]==k)
            return v.size()-i-1;
            else
            return v.size()-i;
        }
        return -1;
    }
};