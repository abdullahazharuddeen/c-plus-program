
int maxDepth(TreeNode *tree)
{
    if (tree == nullptr) {
        return 0;
    }
    if (tree->left == nullptr && tree->right == nullptr) {
        return 1;
    } else {
        return max(maxDepth(tree->left), maxDepth(tree->right)) + 1;
    }
}
