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
public:
    int solve(TreeNode* root,int mx,int& ans){
        if(root==NULL) return 0;
        mx=max(mx,root->val);
        if(mx==root->val) ans++;
        solve(root->left,mx,ans);
        solve(root->right,mx,ans);
        return ans;
    }
    int goodNodes(TreeNode* root) {
        int ans=0;
        if(root==NULL) return 0;
        int mx=root->val;
        return solve(root,mx,ans);
    }
};