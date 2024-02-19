class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int i=0;
        priority_queue<int>p;
        for(i=1;i<h.size();i++){
            int d=h[i]-h[i-1];
            if(d<=0){
                continue;
            }
            b-=d;
            p.push(d);
            if(b<0){
                b+=p.top();
                p.pop();
                l--;
            }
            // ans=i;
            if(l<0)
            break;
        }
        return i-1;
    }
};