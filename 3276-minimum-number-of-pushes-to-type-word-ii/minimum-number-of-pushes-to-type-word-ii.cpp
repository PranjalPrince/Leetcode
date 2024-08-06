class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        map<char,int>mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        vector<pair<char,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){return a.second>b.second;});
        int cnt=0;
        for(int i=0;i<v.size();i++){
            if(cnt<8){
                ans+=1*v[i].second;
            }
            else if(cnt<16){
                ans+=2*v[i].second;
            }
            else if(cnt<24)
            ans+=3*v[i].second;
            else ans+=4*v[i].second;
            cnt++;
        }
        return ans;
    }
};