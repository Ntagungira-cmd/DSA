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

    public:
    DoublyLinkedList(){
        this->head=NULL;
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
    void printFromFront(){
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
};

int main(){
DoublyLinkedList list;
list.addBefore(12);
list.addBefore(13);
list.addBefore(14);
list.printFromFront();
}
