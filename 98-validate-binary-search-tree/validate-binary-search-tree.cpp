/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         vector<int>v;
//         helper(root,v);
//         for(int i=0;i<v.size()-1;i++){
//             if(v[i+1]<=v[i])
//             return false;
//         }
//         return true;
//     }
//     void helper(TreeNode* root,vector<int>&v){
//         if(root!=nullptr){
//             helper(root->left,v);
//             v.push_back(root->val);
//             helper(root->right,v);
//         }
//     }
// };
class Solution {
    public:
    long long ans=LONG_MIN;
    void helper(TreeNode* root, bool& isvalid){
        if(root==nullptr)
        return;
        helper(root->left,isvalid);
        if(ans>=root->val)
        isvalid=false;
        ans=root->val;
        helper(root->right,isvalid);
    }
    bool isValidBST(TreeNode* root){
        bool isvalid=true;
        helper(root,isvalid);
        return isvalid;
    }
};
























