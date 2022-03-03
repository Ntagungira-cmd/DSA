#include <iostream>
using namespace std;
/* Node of a doubly linked list */
struct Node
{
    public:
    int data;
    Node* next; // Pointer to next node in DLL
    Node* prev; // Pointer to previous node in DLL

    public:
    Node(int data){
       this->prev=NULL;
       this->data=data;
       this->next=NULL;
    }
};
struct DoublyLinkedList{

    public:
    Node *head;
    Node *tail;

    public:
    DoublyLinkedList(){
        this->head=NULL;
        this->tail=NULL;
    }
    Node * addBefore(int data){
        Node * newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            return newNode;
        }
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
        return newNode;
    }
    void printForward(){
        if(head==NULL){
            cout<<"Empty List"<<endl;
            return;
        }
        Node *temp=head;
        while(temp!=NULL){
           cout<<temp->data<<endl;
           temp=temp->next;
        }
    }
    Node * addEnd(int data){
       Node *newNode=new Node(data);
       if (head==NULL){
           head=newNode;
           return newNode;
       }
       Node * current=head;
       while(current!=NULL){
        if(current->next==NULL){
            current->next=newNode;
            current->prev=current;
            return newNode;
        }
        current=current->next;
       }
       return newNode;
    }

    void printBackward(){
       if(head==NULL){
         cout<<"Empty List"<<endl;
         return;
       }
       Node *current=head;
       while(current->next!=NULL){
          current=current->next;
       } 
       while(current!=NULL){
          cout<<current->data<<endl;
          current=current->prev;
       }
    }
    void insertAfter(Node *node , int data){
        Node *newNode=new Node(data);
        if(node==NULL){
          cout<<"Give non-empty node"<<endl;
          return;
        }
        if(node->next==NULL){
           node->next=newNode;
           newNode->prev=node;
           tail=newNode;
           return;
        }
        Node *after=node->next;
        node->next=newNode;
        newNode->prev=node;
        newNode->next=after;
        after->prev=newNode;
    }
};

int main(){
DoublyLinkedList list;
// list.addBefore(12);
// list.addBefore(13);
// list.addBefore(14);
list.addEnd(17);
Node *val=list.addEnd(13);
list.insertAfter(val,20);
list.addEnd(14);
list.printForward();
//list.printBackward();
}
