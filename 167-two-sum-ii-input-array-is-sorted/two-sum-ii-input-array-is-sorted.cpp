class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i=0,j=num.size()-1;
        vector<int>ans;
        while(true){
            if(num[i]+num[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(num[i]+num[j]>target)
            j--;
            else
            i++;
        }
        return ans;
    }
};