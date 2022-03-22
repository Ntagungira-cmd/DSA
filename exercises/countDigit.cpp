#include <iostream>
using namespace std;
//Write 	a function named countDigit 	
//that returns the number of times that 
//a given digit appears in a positive number. 
//For example countDigit(32121, 1) would return 2 	
//because there are two 1s in 32121. Other examples:

//countDigit(33331, 3) returns 4
//countDigit(33331, 6) returns 0
//countDigit(3, 3) returns 1

int countDigit(long long int num, int token){
    if(num<0){
      return -1;
    }
    string str=to_string(num);
    string str2=to_string(token);
    int size=str.length();
    int appearanceCount=0;
    for(int i=0;i<size; i++){
       if(str[i]==str2[0]){
           appearanceCount=appearanceCount+1;
       }
    }
    return appearanceCount;
}

int main(){
    cout<<countDigit(33331, 3)<<endl;
}