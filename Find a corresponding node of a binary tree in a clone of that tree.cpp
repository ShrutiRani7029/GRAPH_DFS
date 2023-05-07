/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

TreeNode* dfs(TreeNode* curr, int val){

    if(!curr)return NULL;
    if(curr->val==val)return curr;
    ///left
    TreeNode* l=dfs(curr->left,val);
    if(l)return l;
    ///right
    TreeNode* r=dfs(curr->right,val);
    if(r)return r;
    return NULL;
}
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        ///HERE WE FOLLOWING PREORDER TRAVERSAL--->
        /// 7 4 3 NULL NULL 6 19 --> ROOT, LEFT, RIGHT
        int val=target->val;
        return dfs(cloned,val);

    }
};
