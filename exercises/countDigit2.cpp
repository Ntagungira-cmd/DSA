//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countDigit(long int n, int d){
    int count = 0;
     cout<<"digit: "<<n%10<<endl;
    while (n!=0){
        int rem=n%10;
        if(rem==d){
            cout<<"digit"<<d<<endl;
            count++;
        }
        n=n/10;
    }
    return count;
}
 
// Driver code
int main(){
    cout<<"digit appearance: "<<countDigit(32222,3)<<endl;
    return 0;
}
 