//Iterative inorder traversal using stack 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> inorder(0);
        TreeNode* node = root;
        while(true)
        {
            if(node!=NULL)
            { 
                s.push(node);
                node = node->left;
            }
            else 
            {
                if(s.empty()) break;
                node = s.top();
                s.pop();
                inorder.push_back(node->val);
                node = node->right;
            }

        }
        return inorder;
        
    }
};
// Submission made on Leetcode 
