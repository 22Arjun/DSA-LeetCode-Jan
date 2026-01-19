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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        int zig = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            vector<int> level;
            int size = q.size();
            for(int i = 0; i<size; i++) {
                TreeNode* node = q.front();


                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);


                q   .pop();
                level.push_back(node->val);

            }
            if(zig % 2 == 0) reverse(level.begin(), level.end());
            ans.push_back(level);
            zig++;
        }
        return ans;
    }
};