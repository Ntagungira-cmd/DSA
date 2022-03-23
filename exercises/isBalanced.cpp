#include<iostream>
using namespace std;

int isBalanced(int arr[],int size){

    int count = 1;
        for(int i = 0; i<size; i+=2){
            if(arr[i]%2 != 0){
                count = 0;
                break;
            }
        }
        for(int j = 1; j<size; j+=2 ){
            if(arr[j]%2 == 0)
            {
                count = 0;
                break;
            }
        }
        return count;
}


int main(){
    int arr[]={2,3,4,10,6,7,8};
    int size = *(&arr + 1) - arr;
    cout<<isBalanced(arr,size)<<endl;;

}