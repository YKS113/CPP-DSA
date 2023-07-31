//Linked list- a linear data struture made out of collection of nodes each node has some data and a pointer(address) to the next node
//Its a dynamic data structure i.e. user can grow/ shrink the data structure at runtime, hence no memory wastage
//insertion/deletion is easy beacuse it does not need to shift spaces for these operations(like in array) to maintain order
//disadvantage- 1. traversal is hard to reach nth node, we have to traverse from zeroth node to nth node through every other intermediate node; While in array if we want to access nth element, we do simple arithmatic &(0th element) + n*4 to reach the nth element                                                                          2. since, it also stores pointers, it takes more memory

//creating a node
/*
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
//printing a linked list
void printNode(Node* &head){//no need of &,still can write for consistncy in writing
    Node* temp=head;
while(temp!=0){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
//==================================================================================
//insert at tail
void insertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=temp;
}
//==================================================================================
//insert at mid
void inserAtMid(Node* &head, int data, int n){ //insert at nth node
    if(n==0){//edge case, since for n=0, we dont have beforemid
        insertAtHead(head,data);
        return;
    }
    Node* temp= new Node(data);
    Node* mid=head;
    Node* beforeMid;
    for(int i=0;i<n;i++){
        beforeMid=mid;
        mid=mid->next;
    }
    beforeMid->next=temp;
    temp->next=mid;
}
//===================================================================================
//delete node
void deleteNode(Node* &head,int n){//delete nth node
    if(n==0){
        Node* temp=head;
        head=head->next;
        delete temp;
        temp=NULL;
        return;
    }
    Node* temp=head;
    Node* beforetemp;
    for(int i=0;i<n;i++){
        beforetemp=temp;
        temp=temp->next;
    }
    beforetemp->next=temp->next;
    delete temp; //this deallocates the heap mem given to the node
    temp=NULL;  //this makes the ptr pointing to now empty locn point to NULL, Note- ptr is stored in stack and not deleted by delete keyword and this wild ptr should be nullified for safety purpose.


}

};
int main()
{
// Node *node1= new Node(60); 
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;
// //===============================================================================
// Node* head= node1; //make a head pointer, pointing to first node
// head->insertAtHead(head,50);
// //===============================================================================
// head->printNode(head);
// //===============================================================================

Node* node1=new Node(50);
Node* head=node1;
Node* tail=head;
head->insertAtTail(tail,60);
head->printNode(head);
cout<<endl;
//================================================================================
head->insertAtTail(tail,70);
head->insertAtTail(tail,80);
head->insertAtTail(tail,90);
head->insertAtTail(tail,100);

head->inserAtMid(head,75,3);
head->printNode(head);
cout<<endl;
head->inserAtMid(head,40,0); //at first node
head->printNode(head);
cout<<endl;
head->inserAtMid(head,110,8); //after last node
head->printNode(head);
cout<<endl;
//==================================================================================
head->deleteNode(head,5);
head->printNode(head);
cout<<endl;
head->deleteNode(head,7);
head->printNode(head);
cout<<endl;
head->deleteNode(head,0);
head->printNode(head);
cout<<endl;
}
*/

//Doubly linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    void insertAtHead(Node* &head, int data){
        Node* temp= new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    void insertAtTail(Node* &tail, int data){
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    void insertAtMid(Node* &head,Node* &tail,int data,int n){
        if(n==0){
            head->insertAtHead(head,data);
            return;
        }
        if(n== head->length(head)){
            insertAtTail(tail,data);
            return;
        }
        Node* temp=new Node(data);
        Node* mid=head;
        Node* beforeMid;
        for(int i=0;i<n;i++){
            beforeMid= mid;
            mid=mid->next;
        }
        beforeMid->next=temp;
        temp->prev=beforeMid;
        temp->next=mid;
        mid->prev=temp;
    }
    void deleteNode(Node* &head,int n){
        if(n==0){
            head->next->prev=NULL;
            Node* temp=head;
            head = temp->next;
            delete temp;
            temp=NULL;
            return;
        }
        Node* mid=head;
        Node* beforeMid;
        for(int i=0;i<n;i++){
            beforeMid= mid;
            mid=mid->next;
        }
        beforeMid->next=mid->next;
        mid->prev=beforeMid;
        delete mid;
        mid = NULL;
    }
    void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    int length(Node* head){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;    
    
    }
};
int main()
{
    Node* node1=new Node(50);
    Node* head=node1;
    Node* tail=head;
    head->insertAtHead(head,40);
    head->print(head);
    cout<<endl;
    head->insertAtTail(tail,60);
    head->print(head);
    cout<<endl;
    head->insertAtTail(tail,70);
    head->insertAtTail(tail,80);
    head->insertAtTail(tail,90);
    head->insertAtTail(tail,100);
    head->insertAtMid(head,tail,75,3);
    head->print(head);
    cout<<endl;
    head->insertAtMid(head,tail,30,0);
    head->print(head);
    cout<<endl;
    head->insertAtMid(head,tail,110,9);
    head->print(head);
    cout<<endl;
    head->deleteNode(head,4);
    head->print(head);
    cout<<endl;
    head->deleteNode(head,0);
    head->print(head);
    cout<<endl;
    head->deleteNode(head,7);
    head->print(head);
    cout<<endl;

}
