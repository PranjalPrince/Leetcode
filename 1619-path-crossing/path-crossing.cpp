class Solution {
public:
    bool isPathCrossing(string path) {
        int a=0,b=0;
        vector<vector<int>>v;
        vector<int>v2;
        v2.push_back(0);
        v2.push_back(0);
        v.push_back(v2);
        for(int i=0;i<path.size();i++){
            if(path[i]=='N')
            a++;
            else if(path[i]=='S')
            a--;
            else if(path[i]=='E')
            b++;
            else if(path[i]=='W')
            b--;
            vector<int>val;
            val.push_back(a);
            val.push_back(b);
            if(find(v.begin(),v.end(),val)!=v.end())
            return true;
            v.push_back(val);
        }
        return false;
    }
};