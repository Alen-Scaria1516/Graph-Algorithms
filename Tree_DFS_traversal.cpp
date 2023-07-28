
//Preorder Traversal for    
class Solution {
    void Preorder(TreeNode *root,vector<int> &ans)
    {
        if(root==NULL)return;
        ans.push_back(root->val);
        Preorder(root->left,ans);
        Preorder(root->right,ans);
        return;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        Preorder(root,ans);
        return ans;
    }
};
//Inorder traversal
class Solution {
    void Inorder(TreeNode *root,vector<int>&ans)
    {
        if(root==NULL) return;
        Inorder(root->left,ans);
        ans.push_back(root->val);
        Inorder(root->right,ans);
        return;

    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans(0);
        Inorder(root,ans);
        return ans;
    }
};

//Preorder traversalclass Solution {
    void PostOrder(TreeNode *root,vector<int>&ans)
    {
        if(root==NULL) return;
        PostOrder(root->left,ans);
        PostOrder(root->right,ans);
        ans.push_back(root->val);
        return;

    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans(0);
        PostOrder(root,ans);
        return ans;
    }
};
//Submissions made on Leetcode 
