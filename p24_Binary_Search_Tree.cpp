// BST- a Binary tree where,for every node, all of the nodes in its left subtree have smaller data value than it and all nodes in its right subtree have larger data value than it.

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *addToBST(Node *root, int data)
{
    if (root == NULL)
    {
        Node *temp = new Node(data);
        return temp;
    }
    if (data < root->data)
    {
        root->left = addToBST(root->left, data);
    }
    else
    {
        root->right = addToBST(root->right, data);
    }
    return root;
}
Node *takeInput(Node *root)
{
    int data;
    while (data != -1)
    {
        cout << "Enter data\n";
        cin >> data;
        if (data != -1)
            root = addToBST(root, data);
    }
    return root;
}
void print(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
int main()
{
    //{10,8,21,7,27,5,4,3} Eg. i/p data
    Node *root = NULL;
    root = takeInput(root);
    print(root);
}
// this was insertion in BST, insertion of new node takes O(h)=O(logn) but in case of skewed trees it becomes O(n) TC, n-->no of nodes present in tree previously, while conventional tree takes O(n)

// P-1 Search In BST TC O(logn)
// https://www.codingninjas.com/studio/problems/search-in-bst_1402878?leftPanelTabValue=PROBLEM
// LC-700

// Property--Inorder of BST gives els in sorted order

// P-2 Max and min element in Binary Tree
//https://www.geeksforgeeks.org/problems/max-and-min-element-in-binary-tree/1

//P-3 LC-450. Delete Node in a BST
//TC O(logn)--2 part process 1.find node takes TC (part of Height) 2.del node takes TC(remaining part of height)