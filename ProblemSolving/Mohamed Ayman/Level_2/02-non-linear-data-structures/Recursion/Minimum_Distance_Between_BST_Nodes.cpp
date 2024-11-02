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
    void inorder(TreeNode* root , vector<int>& in)
    {
        if(root== NULL)
        {
            return;
        }

        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }


public:
    int minDiffInBST(TreeNode* root) {
        vector<int>ans;
        inorder(root , ans);
        int mini = INT_MAX;

        int n = ans.size();
        int i=0;
        int j=1;

        while(j < n)
        {
            int diff = ans[j]-ans[i];
            mini = min(mini , diff);
            i++;
            j++;
        }
        
        return mini;
        
    }
};