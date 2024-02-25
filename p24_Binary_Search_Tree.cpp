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
// https://www.geeksforgeeks.org/problems/max-and-min-element-in-binary-tree/1

// P-3 LC-450. Delete Node in a BST
// TC O(logn)--2 part process 1.find node takes TC (part of Height) 2.del node takes TC(remaining part of height)

// P-4 Validate Partial BST
// M-1 find inorder traversal of tree in O(n), and check if its sorted or not
// https://www.codingninjas.com/studio/problems/validate-bst_799483
// LC-98. Validate Binary Search Tree

// P-5 LC-230. Kth Smallest Element in a BST
// TC O(n) SC O(h)
// Xtra- kth largest el in BST, do reverse inorder trav-- RNL
// M-1 find inrder traversal array and return kth el

// P-6 Predecessor And Successor In BST
// https://www.codingninjas.com/studio/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&leftPanelTabValue=PROBLEM
// TC O(h) SC O(1) due to iterative approach
// M-1 find inorder trav array and return k-1,k+1 el

// P-7 LCA of Two Nodes In A BST
// https://www.codingninjas.com/studio/problems/lca-in-a-bst_981280?leftPanelTab=0&leftPanelTabValue=PROBLEM
// LC-235
// M-1 simple LCA of tree but wil take TC O(n)
// TC O(h), SC O(1)/can be done with reccursion also then, SC O(h)

// P-8  Two Sum in a BST
// https://www.codingninjas.com/studio/problems/two-sum-in-a-bst_1062631?leftPanelTab=0&leftPanelTabValue=PROBLEM
// M-1 using hashmap, TC O(n), SC O(n)
// M-2 using vector to store inorder traversal, then finding Two Sum using 2 pointer approach TC O(n+n)~ O(n), SC O(n)

// P-9  Flatten BST To A Sorted List
// https://www.codingninjas.com/studio/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=0&leftPanelTabValue=PROBLEM
// TC O(n) SC O(n)

// P-10 Normal BST To Balanced BST
// https://codingninjas.com/studio/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=0&leftPanelTabValue=PROBLEM
// TC O(n) SC O(n)
// similar binary search approach can be used to solve the problem-- contruct BST from an sorted array
// LC-1382

// P-11 Construct BST from preorder array
//https://www.codingninjas.com/studio/problems/preorder-traversal-to-bst_893111?leftPanelTab=0&leftPanelTabValue=PROBLEM
// M-1 sort the array to get inorder, now similar approach like build tree from preorder and inorder TC O(nlogn) for sorting
//M-2 TC O(n) SC O(n)