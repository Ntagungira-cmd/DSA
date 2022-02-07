#include <iostream>
using namespace std;
class SortNumbers{
public:
  int *  Sortnum(int numbers[],int arrayLength){
    for(int i=0;i<arrayLength;i++){
       for(int j = 0 ; j < arrayLength-1;j++){
           if(numbers[j] > numbers[j+1]){
               int temp = numbers[j];
               numbers[j] = numbers[j+1];
               numbers[j+1] = temp;
           }
       }
    }
    return numbers;
  }
};
int main(){
     SortNumbers sorter;
     int numbers[] = {12,2,3,4,2,1,4,2,7,8,43};
     int arrayLength = sizeof(numbers) / sizeof(numbers[0]);
     int* sorted = sorter.Sortnum(numbers,arrayLength);
    for(int z=0;z<arrayLength;z++){
                cout << sorted[z] << endl;
    }
    return 0;
}