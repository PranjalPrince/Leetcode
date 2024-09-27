auto speed = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())
        return false;
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                v.push_back(i);
            }
        }
        if(v.size()==2){
            return s[v[0]]==goal[v[1]] and s[v[1]]==goal[v[0]];
        }
        if(v.empty()){
            for(auto x:s){
                if(count(s.begin(),s.end(),x)>1)
                return true;
            }
        }
        return false;
    }
};
//  if (s.size() != goal.size()) return false;

//         std::vector<int> v;
        
//         // Find the indices where the characters differ
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] != goal[i]) {
//                 v.push_back(i);
//             }
//         }

//         // If there are exactly two differences, check if they can be swapped
//         if (v.size() == 2) {
//             return s[v[0]] == goal[v[1]] && s[v[1]] == goal[v[0]];
//         }
        
//         // If there are no differences, check for duplicates
//         if (v.empty()) {
//             std::unordered_set<char> seen;
//             for (char c : s) {
//                 if (seen.count(c)) {
//                     return true; // Found a duplicate character
//                 }
//                 seen.insert(c);
//             }
//             return false; // No duplicates found
//         }

//         return false;
//     }
// };