auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                ind=i;
                break;
            }
        }
        if(ind!=-1){
            reverse(word.begin(),word.begin()+ind+1);
        }
        return word;
    }
};