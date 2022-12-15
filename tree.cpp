#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void printinorder(node* node)
{
    if(node ==NULL) return;

    printinorder(node->left);
    // first we recur left child;
     cout << node->data << " ";

     printinorder(node->right);
}
void printpreorder(node* node)
{
    if(node==NULL) return;

    cout << node->data << " ";
    printpreorder(node->left);
    printinorder(node->right);
}
void printpostorder(node* node)
{
    if(node ==NULL) return;

    printpostorder(node->left);
    printpostorder(node->right);
    cout << node->data << " ";
}
int main()
{
    node* root = new node(1);
    // 1 is root of the tree

    root-> left = new node(2);
    // 2 is the left child of 1

    root-> right = new node(3);
    // 3 is the right child of 1

    root-> left-> left = new node(4);
    root-> left-> right = new node(5);
    root-> right-> left = new node(6);
    root-> right-> right = new node(7);
    // root-> right -> left-> left = new node(8);
    // root-> right -> left -> right = new node(9);

    cout << "inorder tree is : ";
    printinorder(root);
    cout << "\nPreorder tree is : ";
    printpreorder(root);

    cout << "\npostorder tree is : ";
    printpostorder(root);

}