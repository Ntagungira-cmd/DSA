#include<iostream>
#include<cstring>
using namespace std;

char *slicerArray(char *arr, int start, int length){

    int lengthOfArray=strlen(arr);
    if(start<0||length>lengthOfArray||(start+length)>lengthOfArray||start>lengthOfArray){
       cout<<"Null"<<endl;
       return 0;
    }
    char *resArray=new char[length+1];
     int x=0;
    for(int i=start;i<(start+length); i++){
       resArray[x]=arr[i];
       x++;
    }
    return resArray;
}

int main(){
    static char arr[]={'a','b','c'};
    char *tempHolder=slicerArray(arr,0,3);
    cout<<strlen(tempHolder)<<endl;
    for(int x=0; x<strlen(tempHolder);x++){
        cout<<tempHolder[x]<<',';
    }
    return 0;
    }
