#include<iostream>
using namespace std;   

class Node{

public:
    int data;
    Node *next;
public:
    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class linkedList{
  public:
    Node *head;
    linkedList(){
        head=NULL;
    }
    void addNewNode(int data){
         Node  *newNode=new Node(data);
         if(head==NULL){
             head=newNode;
             return;
         }
         Node *temp=head;
         while(temp->next!=NULL){
             temp=temp->next;
         }
         temp->next=newNode;
    };

    void display(){
        if(head==NULL){
          cout<<"empty list"<<endl;
          return;
        }
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    };

    void deleteNode(int position){
        if(!head){
            cout << "The list is empty"<<endl;
            return;
        }
        if(position == 1){
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        int size = 0;
        Node *current = head;
        while(current){
           size++;
           current = current->next;
        }
        if(size< position){
            cout << "Invalid position"<<endl;
            return;
        }
        current = head;
        Node *previous;
        while(position>1){
            position--;
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
        delete current;
        cout << "node deleted"<<endl;
    }

    void insert(int position,int data){
         Node *newNode=new Node(data);
         if(head==NULL){
             if(position>1){
                 return;
             }
            head=newNode;
            return;
         }
         Node *current=head;
         int size=0;
         while(current!=NULL){
            size++;
            current=current->next;
         }
        if(size<position){
          cout<<"Invalid position"<<endl;
          return;
        }
        if(position==1){
            Node *temp=head;
            head=newNode;
            newNode->next=temp;
            return;
        }
        Node *previous;
        current=head;
        while(position>1){
            position--;
            previous=current;
            current=current->next;
        }

        previous->next=newNode;
        newNode->next=current;

    }
    
    Node *search_pos(int position){
        if(!head){
           return NULL;
        };
        int count=0;
        Node *current=head;
        while(count<position){
           count++;
           if(count==position){
              return current;
              }
           current=current->next;  
        }
        return NULL; 
    };
};



int main(){

    linkedList list;
    list.addNewNode(12);
    list.addNewNode(8);
    list.addNewNode(45);
    list.addNewNode(30);
    cout<<"****** After Adding ******"<<endl;
    list.display();
    // list.insert(2,90);
    // cout<<"****** After inserting ******"<<endl;
    // list.display();
    // cout<<"****** After Deleting ******"<<endl;
    // list.deleteNode(2);
    // list.display();
    // cout<<"****** Returned After searching ******"<<endl;
    // Node *res =list.search_pos(2);
    // cout<<res<<endl;
    
}