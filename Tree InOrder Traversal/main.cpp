
void InOrder(TreeNode *tree)
{
    if (tree != nullptr) {
        InOrder(tree->left);

        printf("%d ", tree->val);

        InOrder(tree->right);
    }
}
