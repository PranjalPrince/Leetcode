
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int fre=0;
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](const auto&a, const auto& b){return a.second<b.second;});
        for(auto &[key,val]:v){
            if(k>val){
                k-=val;
                fre++;
                cout<<"hello"<<endl;
            }
            else{
                return v.size()- (val==k?1:0)-fre;
            }
        }
        return -1;
    }
};