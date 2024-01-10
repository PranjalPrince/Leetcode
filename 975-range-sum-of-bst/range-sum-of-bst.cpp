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
class Solution {
    int sum=0;
    void code(TreeNode* node,int low, int high){
        if(!node)
        return;
        int a=node->val;
        if(a>=low and a<=high){
            sum+=a;
        }
        code(node->left,low,high);
        code(node->right,low,high);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        // int sum=0;
        code(root,low,high);
        return sum;
    }
};