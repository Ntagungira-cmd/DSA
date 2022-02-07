#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
      return false;
    }
    for(int i=2;i<=n/2;i++){
       if(n%i==0){
          return false;
       }
    }
    return true;
}

int isMagicArray(int arr[],int size){
    if(size<=0){
       cout<<0<<endl;
       return 0;
    }
    int i=0, primeSum=0;
    for(i=0; i<size; i++){
      if(isPrime(arr[i])){
          primeSum+=arr[i];
      }
    }
    if(primeSum==arr[0]){
        cout<<1<<endl;
        return 1;
    }
    cout<<0<<endl;
    return 0;
}

int isPrimeProduct(int number){
  if(isPrime(number)){
    return 0;
  }
  for(int i=2; i<=number/2; i++){
    if(isPrime(i) && number%i==0 && isPrime(number/i)){
        return 1;
    };
  }
  return 0;
};
 
int main(){
  int arr[]= {21, 3, 7, 9, 11, 6};
  isMagicArray(arr,6);
  int res2=isPrimeProduct(12);
  cout<<res2<<endl;  
}