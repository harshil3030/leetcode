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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int size = q.size();
            vector<int> include;
            for(int i = 0; i < size; i++) {
                TreeNode* top = q.front();
                q.pop();
                include.push_back(top -> val);
                
                if (top -> left != nullptr) q.push(top -> left);
                if (top -> right != nullptr) q.push(top -> right);
            }
            ans.push_back(include);
        }
        
        return ans;
    }
    /*
        it's simple level order traversal or bfs using queue
    */
};