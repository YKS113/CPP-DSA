/*
Tree- a non-linear data structure, where one node can be connected to many other nodes and its in a heirerchical fashion (also called n-ry tree)

Binary tree- a tree where eachnode can have at most 2 children; starts with a single root node
*/

// Building a BT
#include <bits/stdc++.h>
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
    Node *buildTree(Node *root)
    {
        cout << " enter the data" << endl;
        int data;
        cin >> data;
        root = new Node(data);

        if (data == -1)
        { // base case
            return NULL;
        }

        cout << "for left of " << data;
        root->left = buildTree(root->left);

        cout << "for right of " << data;
        root->right = buildTree(root->right);

        return root;
    }
    // This was Depth First Search-- The algorithm starts at the root node and explores as far as possible along each branch before backtracking.

    // Breadth first search/ Level order search-- It begins at the root of the tree or graph and investigates all nodes at the current depth level before moving on to nodes at the next depth level.
    void BreadthFirstSearch(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        q.push(NULL); // for printing new level to new line; not mandatory, prog will work without this also

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            // for printing new level to new line
            if (temp == NULL && !q.empty())
            { // i.e. this level is compleete !q.empty() is imp othrwise prog will enter in infinite loop when q becomes empty at end
                cout << endl;
                q.push(NULL); // marks end of new level
            }
            else
            {
                cout << temp->data << " ";
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }

    /*Q.  Given a binary tree, print its nodes in reverse level order */
    void reverseLevelOrder(Node *root)
    {
        stack<Node *> S;
        queue<Node *> Q;
        Q.push(root);

        // Do something like normal level order traversal order. Following are the
        // differences with normal level order traversal
        // 1) Instead of printing a node, we push the node to stack
        // 2) Right subtree is visited before left subtree
        while (Q.empty() == false)
        {
            /* Dequeue node and make it root */
            Node *temp = Q.front();
            Q.pop();
            S.push(temp);

            /* Enqueue right child */
            if (temp->right)
                Q.push(temp->right); // NOTE: RIGHT CHILD IS ENQUEUED BEFORE LEFT

            /* Enqueue left child */
            if (temp->left)
                Q.push(temp->left);
        }

        // Now pop all items from stack one by one and print them
        while (S.empty() == false)
        {
            Node *temp = S.top();
            cout << temp->data << " ";
            S.pop();
        }
    }

    void inorderTraversal(Node *root)
    {
        Node *temp = root;
        if (temp == NULL)
        { // base case
            return;
        }

        inorderTraversal(temp->left);
        cout << temp->data << " ";
        inorderTraversal(temp->right);
    }
    void preorderTraversal(Node *root)
    {
        Node *temp = root;
        if (temp == NULL)
        { // base case
            return;
        }

        cout << temp->data << " ";
        preorderTraversal(temp->left);
        preorderTraversal(temp->right);
    }
    void postorderTraversal(Node *root)
    {
        Node *temp = root;
        if (temp == NULL)
        { // base case
            return;
        }

        postorderTraversal(temp->left);
        postorderTraversal(temp->right);
        cout << temp->data << " ";
    }

    void buildFromLevelOrder(Node *&root)
    {
        queue<Node *> q;

        cout << "Enter data for root" << endl;
        int data;
        cin >> data;
        root = new Node(data);

        q.push(root);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();

            cout << "Enter left node for: " << temp->data << endl;
            int leftData;
            cin >> leftData;

            if (leftData != -1)
            {
                temp->left = new Node(leftData);
                q.push(temp->left);
            }

            cout << "Enter right node for: " << temp->data << endl;
            int rightData;
            cin >> rightData;

            if (rightData != -1)
            {
                temp->right = new Node(rightData);
                q.push(temp->right);
            }
        }
    }
};
int main()
{
    Node *root = NULL;
    Node *n = new Node(0);
    root = n->buildTree(root);   // TC O(n) SC O(1); if stack size cosidrd, O(h) (h of tree) (in case of skewed tree, h=n hence, O(n))
    n->BreadthFirstSearch(root); // TC O(n) SC O(w) (w-max width of tree)
    n->reverseLevelOrder(root);
    n->inorderTraversal(root);
    cout << endl; // TC O(n) SC O(1); -//-
    n->preorderTraversal(root);
    cout << endl; // TC O(n) SC O(1); -//-
    n->postorderTraversal(root);
    cout << endl; // TC O(n) SC O(1); -//-
    // n->buildFromLevelOrder(root);
    // 1 2 4 8 -1 -1 9 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 10 -1 -1
    /*
                   1
              2           3
            4   5       6   7
          8   9               10
    */
}

// P-1 Count leaf nodes
// https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTab=0

// P-2 find Height/Depth of BT
// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

// P-3 Diameter of a BT
// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

// P-4 check if tree is balanced or not
//  https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
// This method can also be used to solve P-3

// P-5 Determine if Two Trees are Identical
// https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1

// P-6 Sum tree
// https://practice.geeksforgeeks.org/problems/sum-tree/1