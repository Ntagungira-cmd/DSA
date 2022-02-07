#include<iostream>
using namespace std;

int main(){
    int *PointerArray;
    int myArray[3]={1,4,5};
    PointerArray=myArray;
    cout<<"Print Using Array "<<myArray[0]<<endl;
    cout<<"Print Using Pointer "<<*PointerArray<<endl;
    cout<<sizeof(myArray)/sizeof(myArray[0])<<endl;
    for(int i=0; i<sizeof(myArray)/sizeof(myArray[0]);i++){
        PointerArray=i+PointerArray;
        cout<<"Print Using Pointer "<<PointerArray<<endl;
        cout<<"Print Using Pointer "<<*PointerArray<<endl;
    };
}