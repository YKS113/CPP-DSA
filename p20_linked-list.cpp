//Linked list- a linear data struture made out of collection of nodes each node has some data and a pointer(address) to the next node
//Its a dynamic data structure i.e. user can grow/ shrink the data structure at runtime, hence no memory wastage
//insertion/deletion is easy beacuse it does not need to shift spaces for these operations(like in array) to maintain order
//disadvantage- 1. traversal is hard to reach nth node, we have to traverse from zeroth node to nth node through every other intermediate node; While in array if we want to access nth element, we do simple arithmatic &(0th element) + n*4 to reach the nth element                                                                          2. since, it also stores pointers, it takes more memory

//Types-
//1.Singly linked list- every node has data and ptr to next node, ptr of last/tail node is NULL 
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
while(temp!=NULL){
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

//2.Doubly linked list- every node has data, ptr to next node and a ptr to prev node, next ptr of last/tail and prev ptr of first/head node are NULL 
/*
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
*/

//1.Circular linked list- similar to Singly LL, but ptr of tail node points to head node 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
void insertAtHead(Node* &head,Node* &tail, int data){ 
    Node* temp= new Node(data);
    temp->next=head;
    tail->next=temp;
    head=temp;                 
    }  
void insertAtTail(Node* &head,Node* &tail, int data){ 
    Node* temp= new Node(data);
    temp->next=head;
    tail->next=temp;
    tail=temp;                 
    }
void insertAtMid(Node* &head, Node* &tail, int data, int n){ //insert at nth node
    if(n==0){//edge case, since for n=0, we dont have beforemid
        insertAtHead(head,tail,data);
        return;
    }
    if(n==length(head)){
        insertAtTail(head,tail,data);
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
void printNode(Node* head){
    Node* temp=head;
    cout<<temp->data<<" ";
    temp=temp->next;
while(temp!=head){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
int length(Node* head){
        Node* temp=head->next;//we've counted first node already by giving count=1
        int count=1;
        while(temp!=head){
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
    Node* tail=node1;
    head->insertAtHead(head,tail,40);
    head->printNode(head);
    cout<<endl;
    head->insertAtTail(head,tail,60);
    head->printNode(head);
    cout<<endl;

    head->insertAtTail(head,tail,70);
    head->insertAtTail(head,tail,80);
    head->insertAtTail(head,tail,90);
    head->insertAtTail(head,tail,100);

    head->insertAtMid(head,tail,75,4);
    head->printNode(head);
    cout<<endl;
    head->insertAtMid(head,tail,30,0);
    head->printNode(head);
    cout<<endl;
    head->insertAtMid(head,tail,110,9);
    head->printNode(head);
    cout<<endl;
}

//Similarly can be solved for Doubly Circular linked list- similar to Singly Circular LL, but next ptr of tail node points to head node and prev ptr of head node points to tail node

//P-1 Reverse a linked list 
//LC- 206
//TC- O(n), SC-O(1)

//P-2 Middle of LL
//LC- 876
//M-1 simple TC- O(n)
//M-2 Fast pointer approach-- It involves two ptrs a fast and slow, fast moves two blocks while slow moves one block in one iteration, by the time fast ptr completes the traversal, slow ptr reaches mid.  TC- O(n/2)

//P-3 Reverse LL in group of k

//P-4 check if LL is circular, (consider empty list also as circular)

/*************************************************
        Following is the structure of class Node:
        #include <bits/stdc++.h> 
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/
/*
bool isCircular(Node* head){
    if(head==NULL){// edge case
        return 1;
    }
    Node* first = head;
    Node* curr=first->next; //if started from curr, while loop will not start, hence                    start with curr->next
    while(curr!=first){//this logic for both LL length=1 & >1
        if(curr==NULL){
            return 0;
        }
        curr=curr->next;
    }
    return 1;
}

//M-2 using maps, this Method has more SC, hence not preferred
bool isCircular(Node* head){
    unordered_map<Node*, bool> m;
    Node* curr=head;
    while(curr!=NULL){
        if(m[curr]==0){
            m[curr]=1;
        }
        else{
            return 1;
        }
        curr=curr->next;
    }
    return 0;
}
*/


//**************************************************************************************PRO TIP for LL probs- always check for cases- empty list, list with 1 node(in case of circular,2 cases- single node & not circulat, single node circular), list with > 1 node  AND always check if any NULL node is being acceessed for NULL->next like condition, if found, add an if statement there like if(curr!=NULL)                                                      **************************************************************************************


//P-5 detect and remove loop
//Link- https://www.codingninjas.com/studio/problems/interview-shuriken-42-detect-and-remove-loop_241049
//Image- images\find loop in LL.jpg

//P-6 given a circular linked list, break it from middle and make two circular LL
//approach- using slow-fast ptrs, find mid, then slow(mid)->next=head and fast(tail)->next= nodAfterSlow;

//P-7 Remove duplicates from sorted LL
//LC- 83

//P-8 Remove duplicates from unsorted LL
//Link- https://www.codingninjas.com/studio/problems/remove-duplicates-from-unsorted-linked-list_1069331

//P-9 sort 0,1,2 in a LL
//Link- https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937

//P-10 merge 2 sorted LL
//Link-https://www.codingninjas.com/studio/problems/merge-two-sorted-linked-lists_800332

//P-11 cheeck if LL is palindrome
//LC- 234
//M-1 convert LL to array & check if arr is palindrome- TC O(n), SC O(n)
//M-2 find mid of LL,reverse LL from mid to tail,compare the two parts TC O(n),SC O(1)

//P-12 Add 2 numbers represented by LL
//Link- https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
//first reverse the two inout lists, then add them and make a new list(approach similar to array Q. of same type) then at the end reverse the ans LL
//TC - O(n+m), SC-O(max(n+m))

//P-13  Clone a linked list with next and random pointer
//Link- https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

//P-14 Merge Sort Linked List 
//Link- https://www.codingninjas.com/studio/problems/merge-sort-linked-list_920473?
//Note-- we preferMerge sort in LL and quick sort in arrays, because accessing random elements in Ll is costly operation which is not the case in arrays