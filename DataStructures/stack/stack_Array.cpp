#include<iostream>
using namespace std;

const int size=20;
int top=-1;
int stack[size];


int isFull(){
    if(top==size-1){
      return 1;
    }
    return 0;
}

int isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}

void push(int data){
    if(!isFull()){
    top++;
    stack[top]=data;
    }else{
        cout<<"Stack overflow"<<endl;
    }
}

void pop(){
    if(!isEmpty()){
        top--;
    }else{
        cout<<"Stack underflow"<<endl;
    }
}

int peek(){
    if(!isEmpty()){
        return stack[top];
    }
    return INT_MAX;
}

void display(){
    if(!isEmpty()){
       for(int i=top;i>=0;i--){
           cout<<stack[i]<<endl;
       }
    }else{
        cout<<"Stack is empty"<<endl;
    }
}

int main(){
    int choice;
    int data;
    cout<<"Your Stack"<<endl;
    display();
    cout<<"Choose 1 to push, 2 to pop, 3 to peek, 4 to display "<<endl;
    cin>>choice;
    int exit=1;
    while(exit==1){
        switch(choice){
        case 1:
        cout<<"Enter the element to push into the stack"<<endl;
        cin>>data;
        push(data);
        display();
        break;
        case 2:
            pop();
            display();
            break;  
        case 3:
            cout<<peek()<<endl;
        case 4:
            display();   
        }
        cout<<"Press 1 to continue or any other key to exit"<<endl;
        cin>>exit;
    }
}