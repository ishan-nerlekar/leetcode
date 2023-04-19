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
    int maxstep=0;
    int longestZigZag(TreeNode* root) {
        dfs(root,true,0);
        dfs(root,false,0);
        return maxstep;
    }
    
    void dfs(TreeNode* root, bool left,int step){
        if(!root) return;
        maxstep=max(step,maxstep);
        if(left){
            dfs(root->right,false,step+1);
            dfs(root->left,true,1);
        }
        else{
            dfs(root->left,true,step+1);
            dfs(root->right,false,1);
        }
    }
};