#include<iostream>
using namespace std;
class Sorter{
    public:
        Sorter(){}
        //Bubble Sort
        int *bubbleSort(int array[],int size){
            for(int i=1; i<size; i++){
                for(int j=0; j<size-1; j++){
                    if(array[j]>array[j+1]){
                        int temp=array[j+1];
                        array[j+1]=array[j];
                        array[j]=temp;
                    };
                };
            };
            return array;
        };
        //Selection Sort
        int *selectionSort(int array[],int size){
            for(int i=0; i<size; i++){
                int min_index=i;
                for(int k=i+1; k<size; k++){
                   if(array[k]<array[min_index]){
                     min_index=k;
                   }
                };
               if(array[min_index]!=array[i]){
                   int temp=array[min_index];
                   array[min_index]=array[i];
                   array[i]=temp;
               }
            };
            return array;
        };


        int Centered(int myArray[],int size){
            int middle=(size/2)-1+1;
            //cout<<middle<<endl;
            if(size%2!=0&&size>=3){
                for(int k=0;k<size;k++){
                  if(myArray[k]<myArray[middle]){
                    cout<<0<<endl;
                    break;
                  };              
                };
            }else{
                cout<<1<<endl;
            }
            return 0;
        };
        void display(int array[],int size){
            for(int k=0; k<size;k++){
                cout<<array[k]<<", ";
            };
        };
};

int main(){
    // int myArray1[10]={3,2,8,23,4,5,6,7,7,8};
    // int myArray2[11]={3,2,8,23,23,7,8,9,96,8};
    int array[5]={3, 2, 1, 4, 5};
    Sorter Sort;
    Sort.Centered(array,5);
return 0;
}