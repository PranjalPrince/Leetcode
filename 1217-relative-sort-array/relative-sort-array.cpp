class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            if(mp[arr2[i]]>0){
                for(int j=0;j<mp[arr2[i]];j++){
                    ans.push_back(arr2[i]);
                }
                mp[arr2[i]]=0;
            }
        }
        for(auto [key,val]:mp){
            for(int i=0;i<val;i++)
            ans.push_back(key);
        }
        return ans;
    }
};