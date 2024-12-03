class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(begin(arr),end(arr));
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++) {
            if(2*arr[i]==arr[j])
            return true;
            }
        }
        for(int i=arr.size()-1;i>0;i--){
            for(int j=0;j<i;j++) {
            if(2*arr[i]==arr[j])
            return true;
            }
        }
        return false;
    }
};