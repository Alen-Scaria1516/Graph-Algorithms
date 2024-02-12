class Solution {
public:
 int findDiameter(TreeNode * Node,int &maxi)
    {
        if(Node ==NULL) return 0;
        int lheight = findDiameter(Node->left,maxi);
        int rheight = findDiameter(Node->right,maxi);

        maxi = max(maxi,lheight + rheight);

        return 1 + max(lheight,rheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        int height = findDiameter(root,diameter);
        return diameter;
    }
};
//submission made on Leetcode 
//TC : O(N)
//Modified the Height finding algorithm 
