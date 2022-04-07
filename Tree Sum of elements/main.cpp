
#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

};



TreeNode* createTreeNode(int val){

    TreeNode* newTreeNode =new TreeNode();
    newTreeNode->val=val;
    newTreeNode->left=newTreeNode->right=nullptr;
    return newTreeNode;
}

TreeNode* Insert(TreeNode* root,int val)
{
    if(root==NULL)
    {
        root=createTreeNode(val);
        return root;
    }
    else if(val<=root->val)
    {
        root->left=Insert(root->left,val);
    }
    else
    {
        root->right=Insert(root->right,val);
    }
    return root;
}
// code in E-olymp
int Sum(TreeNode *tree) {
    int sum=0;

    if(tree!=nullptr)
    {


    sum+=Sum(tree->left);
    sum+= Sum(tree->right);
    sum+=tree->val;
       // cout << tree->val << endl;

    }

    return sum;

}


int main()
{

 TreeNode* root=NULL;
 int n;

 cin >> n;

 for(int i=0;i<n;i++)
 {
     int m;
     cin >> m;

    root= Insert(root,m);
 }


 cout << Sum(root);

}

