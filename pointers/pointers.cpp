#include<iostream>
using namespace std;

int main(){
    int a=3;
    int b=5;
    int temp;
    int* pta=&a;
    int* ptb=&b;
    temp=a;
     *pta=b;
     *ptb=temp;
    cout<<*pta<<endl;
    cout<<*ptb<<endl;
}