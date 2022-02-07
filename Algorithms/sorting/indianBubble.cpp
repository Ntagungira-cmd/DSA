 #include<iostream>
using namespace std;
int main(){
    int array[]={8,7,6,5,4,2,0};
    int  n=sizeof(array)/sizeof(array[0]);
 for(int i=1;i<n;i++){
        for(int j=0; j<n-i; j++){
            if(array[j+1]>array[j]){
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
            
        };
    for(int k=0; k<n; k++){
        cout<<array[k]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sorted Array"<<endl;
    for(int val:array){
        cout<<val<<" ";
    }
    return 0;
}