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
    void leveltraversal(TreeNode* root, vector<vector<int>>& ans){
        if(root == nullptr){
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        vector<int> level;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp == nullptr){
                ans.push_back(level);
                level.clear();
                if(!q.empty()){
                    q.push(nullptr);
                }
            }
            else{
                level.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
        }
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        leveltraversal(root,ans);

        return ans;

    }
};