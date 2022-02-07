#include<iostream>
using namespace std;

int main(){
// Array declaration by specifying the size
int arr1[10];

// With recent C/C++ versions, we can also
// declare an array of user-specified size
const int n = 10;
int arr2[n];
// Array declaration by initializing elements

//int arr[] = { 10, 20, 30, 40 };

// Compiler creates an array of size 4.
// above is same as "int arr[4] = {10, 20, 30, 40}"

// Array declaration by specifying the size and initializing
// elements
//int arr[6] = { 10, 20, 30, 40 };

// Compiler creates an array of size 6, initializes first
// 4 elements as specified by the user and the rest two elements as
// 0. above is same as "int arr[] = {10, 20, 30, 40, 0, 0}"
int array[5];

for(int i=0;i<5;i++){
    array[i]=i+4;
}
for(int k=0;k<5;k++){
    //cout<<array[k]<<" ";

    //another way to access array
    //cout<<"Value  at  index "<<k<<" is "<<k[array]<<endl;
    cout<<"The memory address at index "<<k<<" is "<<&array[k]<<endl;
}

}