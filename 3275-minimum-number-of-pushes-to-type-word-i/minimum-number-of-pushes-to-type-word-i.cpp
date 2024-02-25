class Solution {
public:
    int minimumPushes(string word) {
        // vector<int>v(26,0);
        // int cnt=0;
        // for(int i=0;i<)
        int a=(word.size())/8;
        int b=(word.size())%8;
        int c=0,ans=0;
        if(a==1)
        c=1;
        else if(a==2)
        c=3;   
        else if(a==3)
        c=6;
        return 8*c+b*(a+1);

    }
};