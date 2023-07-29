//Linked list- a linear data struture made out of collection of nodes each node has some data and a pointer(address) to the next node
//Its a dynamic data structure i.e. user can grow/ shrink the data structure at runtime, hence no memory wastage
//insertion/deletion is easy beacuse it does not need to shift spaces for these operations(like in array) to maintain order
//disadvantage- 1. traversal is hard to reach nth node, we have to traverse from zeroth node to nth node through every other intermediate node; While in array if we want to access nth element, we do simple arithmatic &(0th element) + n*4 to reach the nth element                                                                          2. since, it also stores pointers, it takes more memory

//creating a node
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
//===================================================================================
//insertAtHead
void insertAtHead(Node* &head, int data){ //& is used for referencing variable
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;                 //head now points to newly added node and             this reflects in main funcn, since reference var is used
}
//==================================================================================


};
int main()
{
Node *node1= new Node(60); 
cout<<node1->data<<endl;
cout<<node1->next<<endl;
//===============================================================================
Node* head= node1; //make a head pointer, pointing to first node
head->insertAtHead(head,50);
//===============================================================================
//printing a linked list
Node* temp=head;
while(temp!=0){
    cout<<temp->data<<endl;
    temp=temp->next;
}
}
