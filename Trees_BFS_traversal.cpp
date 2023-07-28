class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans(0);
        if(root==NULL) return ans;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int len = q.size();
            vector<int> level(0);
            for(int i = 0;i<len;i++)
            {
                TreeNode * node =q.front();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->val);
                q.pop();
            }
            ans.push_back(level);
        }
        return ans;
    }
};
//Submission made on Leetcode 
