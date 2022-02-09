#include <iostream>
#include <stack>
using namespace std;
//In this example we use the built in stack header file of c++; 
int main(){
    stack<int>Stack;
    //push to inser into stack
    Stack.push(12);
    Stack.push(13);
    Stack.push(14);
    Stack.push(15);
    while(!Stack.empty()){
      cout<<' '+Stack.top()<<endl;
      //pop to remove the topmost element after printing it
      Stack.pop();
    }
}