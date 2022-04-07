TreeNode* Invert(TreeNode* tree)
{
    if(!tree) return nullptr;
    TreeNode* t = new TreeNode(tree->val);
    t->left = Invert(tree->right);
    t->right = Invert(tree->left);
    return t;
}
