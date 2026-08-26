
// Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int balance(TreeNode* root, bool &ans)
    {
        if(root == NULL)
        {
            return 0;
        }

        int left = balance(root->left, ans);
        int right = balance(root->right, ans);

        if(abs(left - right) > 1)
        {
            ans = false;
        }

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root)
    {
        bool ans = true;

        balance(root, ans);

        return ans;
    }
};