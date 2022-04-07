int minDepth(TreeNode *tree)
{
    if (tree->left == nullptr && tree->right == nullptr) {
        return 1;
    } else if (tree->left == nullptr) {
        return minDepth(tree->right) + 1;
    } else if (tree->right == nullptr) {
        return minDepth(tree->left) + 1;
    } else {
        return min(minDepth(tree->left), minDepth(tree->right)) + 1;
    }
}