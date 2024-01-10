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
    void checkTree(TreeNode* node,vector<int>&vec){
        if(!node)
        return;
        if(node->left==nullptr and node->right==nullptr){
            vec.push_back(node->val);
            return;
        }
        checkTree(node->left,vec);
        checkTree(node->right,vec);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        checkTree(root1,v1);
        checkTree(root2,v2);
        return v1==v2;
    }
};