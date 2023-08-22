/*
Tree- a non-linear data structure, where one node can be connected to many other nodes and its in a heirerchical fashion (also called n-ry tree)

Binary tree- a tree where eachnode can have at most 2 children; starts with a single root node
*/

//Building a BT
#include<iostream>
using namespace std;
class Node {
public:
int data;
Node* left;
Node* right;

Node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
}
Node* buildTree(Node* &root){
    cout<<" enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data==-1){//base case
        return NULL;
    }

    cout<<"for left of "<<data;
    root->left=buildTree(root->left);

    cout<<"for right of "<<data;
    root->right=buildTree(root->right);

    return root;
}
};
int main()
{
    Node* root= NULL;
    Node* n=new Node(0);
    n->buildTree(root);
}