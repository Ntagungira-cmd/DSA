#include<iostream>
using namespace std;

struct Queue{
    int front, rear, capacity;
    int *queue;
    Queue(int size){
        front=0;
        rear=0;
        capacity=size;
        queue=new int; 
    }
    void enqueue(int data){
        if(rear==capacity){
            cout<<"The queue is full"<<endl;
            return;
        } 
        queue[rear]=data;
        rear++;
    }
    void display(){
        if(rear==front){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for (int i=front; i<rear ; i++){
            cout<<" "<<queue[i];
        }
        cout<<""<<endl;
    }

    void dequeue(){
        if(rear==front){
            cout<<"Queue is empty"<<endl;
        }
        for(int i=0; i<rear-1; i++){
            queue[i]=queue[i+1];
        }
        rear--;
    }
    int readFront(){
        if(rear==front){
            cout<<"Empty Queue"<<endl;
            return 0;
        }
        return queue[front];
    }
    ~Queue(){
        if(queue){
           delete[]queue;
    }
  }
};

int main(){
    Queue q1(5);
    q1.enqueue(1); 
    q1.enqueue(15);
    q1.enqueue(12); 
    q1.enqueue(21);
    q1.enqueue(9);
    q1.enqueue(23);
    cout<<"Your Queue"<<endl;
    q1.display();
    cout<<"Dequeue"<<endl;
    q1.dequeue();
    q1.display();
    cout<<"Front element of the queue"<<endl;
    cout<<" "<<q1.readFront()<<endl;
}