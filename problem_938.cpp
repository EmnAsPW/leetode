#include <iostream>

using namespace std;

// Definition for a binary tree node.
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    int rangeSumBST(TreeNode *root, int L, int R)
    {
        if (!root)
            return 0;

        if (root->val < L)
            return rangeSumBST(root->right, L, R);

        if (root->val > R)
            return rangeSumBST(root->left, L, R);

        return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
};

int main()
{
    // Example usage
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    int L = 7, R = 15;
    Solution sol;
    cout << "Sum of values in the range [" << L << ", " << R << "] is: " << sol.rangeSumBST(root, L, R) << endl;

    // Deallocate memory (not necessary for LeetCode, but good practice)
    delete root->left->left;
    delete root->left->right;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
