class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        int l=s.size()/k;
        // for(int i=0;i<s.size();i+=l){
        //     map<char,int>mp1,mp2;
        //     for(int j=i;j<i+l;j++){
        //         mp1[s[j]]++;
        //         mp2[t[j]]++;
        //     }
        //     if(mp1!=mp2)
        //     return false;
        // }
        // return true;
        vector<string> v1,v2;
        for(int i=0;i<s.size();i+=l){
            string st=s.substr(i,l);
            // sort(begin(st),end(st));
            v1.push_back(st);
            st=t.substr(i,l);
            // sort(begin(st),end(st));
            v2.push_back(st);
        }
        sort(begin(v1),end(v1));
        sort(begin(v2),end(v2));
        if(v1!=v2)
        return false;
        return true;
    }
};