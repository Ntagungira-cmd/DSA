#include<iostream>
using namespace std;

int main(){
 int arr1[8]={12,4,5,37,9,0,5,16};
 int i,j,key,len;
 len=sizeof(arr1)/sizeof(arr1[0]);
    for (i=1; i<len; i++){
        key=arr1[i];
        j=i-1;
        while(j>=0 && arr1[j]>key){
            arr1[j+1]=arr1[j];
            j=j-1;
        };
        // 
        
        
        arr1[j+1]=key;
   };
   for (int k=0; k<len;k++){
        cout<<arr1[k]<<" ";
    };
return 0;
}