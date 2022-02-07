#include<iostream>
using namespace std;
int main(){
    int array[]={6,2,4,9,3,7};
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n-1;i++){
       int min_index=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[min_index]){
                min_index=j;
            };
        };
        if(array[min_index]!=array[i]){
            int temp=array[min_index];
            array[min_index]=array[i];
            array[i]=temp;
        };
    }
    for(int k=0; k<n; k++){
        cout<<array[k]<<" "; 
    };
}