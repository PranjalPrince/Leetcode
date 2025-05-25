class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        // if(words.size()==1){
        //     if (words[0][0]==words[0][1])
        //         return 2;
        //     else return 0;
        // }
        // vector<int>v(words.size(),1);
        // int cnt1=0,cnt2=0;
        // for(int i=0;i<words.size()-1;i++){
        //     if(v[i]==0)
        //     continue;
        //     for(int j=i+1;j<words.size();j++){
        //         if(words[i][0]==words[j][1] and words[i][1]==words[j][0] and v[i]==1 and v[j]==1){
        //             cnt1+=2;
        //             v[i]=0;
        //             v[j]=0;
        //         }
        //     }
        //     if(words[i][0]==words[i][1] and v[i]==1){
        //         cnt2++;
        //     }
        // }
        // cout<<cnt1<<" ";
        // if(words[words.size()-1][0]==words[words.size()-1][1] and v[words.size()-1]==1)
        //     cnt2++;
        // if(cnt2>0)
        // cnt1++;
        // cout<<cnt2;
        // return cnt1*2;
        map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        bool f=false;
        int ans=0;
        for(auto [key,val]:mp){
            if(val==0)
            continue;
            string key2 = string({key[1],key[0]});
            if(key==key2){
                if(val%2==1)
                f=true;
                ans+=val/2;
                val=0;
            }
            else{
            ans+=min(mp[key],mp[key2]);
            mp[key]=0;
            mp[key2]=0;
            }
        }
        if (f==true)
            return (ans*4)+2;
        else return ans*4;
    }
};