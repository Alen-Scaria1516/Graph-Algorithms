class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder(0);
        if(root==NULL) return postorder;
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        TreeNode* node = root;
        st1.push(node);
        while(!st1.empty())
        {
            node = st1.top();
            st1.pop();
            st2.push(node);
            if(node!=NULL && node->left!=NULL) st1.push(node->left);
            if(node!=NULL && node->right!=NULL) st1.push(node->right);
        }
        
        while(!st2.empty())
        {
            node = st2.top();
            postorder.push_back(node->val);
            st2.pop();
        }
        return postorder;
        
    }
};

//Iterative traversal using 2 stacks 
//Submission made on Leetcode 
