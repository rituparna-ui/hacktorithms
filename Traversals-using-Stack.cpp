#include <bits/stdc++.h>
using namespace std;
 
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* newNode(int data)
{
    TreeNode* Node = new TreeNode();
    Node->val = data;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}
void levelordertraversal(TreeNode* root)
{
    cout<<"Level order traversal : ";
    if(root==NULL)
        return;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        root=q.front();
        q.pop();
        cout<<root->val<<" ";
        if(root->left!=NULL)
        {
            q.push(root->left);
        }
        if(root->right!=NULL)
        {
            q.push(root->right);
        }
    }
    cout<<endl;
    cout<<endl;
}

void inordertraversal(TreeNode* root)
{
     cout<<"Inorder Traversal : ";
     stack<TreeNode*>s;
     while(!s.empty()||root!=NULL)
     {
        while(root!=NULL)
        {
            s.push(root);
            root=root->left;
        }
        root=s.top();
        s.pop();
        cout<<root->val<<" ";
        root=root->right;
     }
     cout<<endl;
     cout<<endl;
}

void preordertraversal(TreeNode* root)
{
    cout<<"Preorder Traversal : ";
   stack<TreeNode*>s;
   s.push(root);
   while(!s.empty())
   {
    root=s.top();
    s.pop();
    cout<<root->val<<" ";
    if(root->right!=NULL)
    {
        s.push(root->right);
    }
    if(root->left!=NULL)
    {
        s.push(root->left);
    }
   } 
   cout<<endl;
   cout<<endl;
}

void postordertraversal(TreeNode* root)
{
    cout<<"Postorder Traversal : ";
   stack<TreeNode*>s;
   s.push(root);
   vector<int>ans;
   while(!s.empty())
   {
    root=s.top();
    s.pop();
    ans.push_back(root->val);
    if(root->left!=NULL)
    {
        s.push(root->left);
    }
    if(root->right!=NULL)
    {
        s.push(root->right);
    }
   } 
   reverse(ans.begin(),ans.end());
   for(int u:ans)
   {
    cout<<u<<" ";
   }
   cout<<endl;
   cout<<endl;
}


int main()
{
    TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(8);
    root->right->right->left = newNode(6);
    root->right->right->right = newNode(7);

    levelordertraversal(root);
    inordertraversal(root);
    preordertraversal(root);
    postordertraversal(root);
    return 0;
}
