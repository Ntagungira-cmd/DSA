//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countDigit(long int n, int d){
    int count = 0;
    while (n!=0){
        if(n%10==d){
            count++;
            n=n/10;
        }
    }
    return count;
}
 
// Driver code
int main(){
    cout<< countDigit(32222,3);
    return 0;
}
 