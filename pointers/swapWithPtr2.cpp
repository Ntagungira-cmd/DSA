#include<iostream>
using namespace std;
void changeAddress(int*);
int main(){
    int k;
    changeAddress(&k);
    cout<<"value of k "<<k<<endl;
};
void changeAddress(int* n){
     *n=1000;
 }