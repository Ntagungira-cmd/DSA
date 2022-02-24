//Implementing deque using circular array
#include<iostream>
using namespace std;

#define MAX 100

class Deque{
    int  arr[MAX];
    int  front;
    int  rear;
    int  size;
    public:
    Deque(int size){
        front=-1;
        rear=0;
        this->size=size;
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if((front == 0 && rear == size-1)||front == rear+1){
            return true;
        }
        return false;
    }

    void insertFront(int key){
        if (isFull()){
            cout << "Overflow\n" << endl;
            return;
        }
        // If queue is initially empty
        if (front == -1){
            front = 0;
            rear = 0;
        }else if (front == 0){
            // front is at first position of queue
            front = size - 1 ;
        }else{
            // decrement front end by '1'
            front = front-1;
        }
        // insert current element into Deque
        arr[front] = key ;
    }

    void deletefront(){
        // check whether Deque is empty or not
        if (isEmpty()){
            cout << "Queue Underflow\n" << endl;
            return ;
        }
    
        // Deque has only one element
        if (front == rear){
            front = -1;
            rear = -1;
        }
        else{
            // back to initial position
            if (front == size -1){
                front = 0;
    
            }else{
                // increment front by '1' to remove current
                // front value from Deque
                front = front+1;
            }
        }
    }

    void deleterear(){
        if (isEmpty()){
            cout << " Underflow\n" << endl ;
            return ;
        }
        // Deque has only one element
        if (front == rear){
            front = -1;
            rear = -1;
        }else if (rear == 0){
            rear = size-1;
        }else{
            rear = rear-1;
        }
    }
};


int main(){

}