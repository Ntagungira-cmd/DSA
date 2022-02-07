#include<iostream>
using namespace std;

//Task Create an Array Of All Possiblities

int *isAllPossibilities(int *arr,int size){
    int temp[]={};
    if(size<=0){
        return 0;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           if(arr[j]!=i){
              cout<<"Not array of all possibilities"<<endl;
              return ;
           }

        }
    }
    return temp;
}

int main(){
 int arr[5]={1};
}