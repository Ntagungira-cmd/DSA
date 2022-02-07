#include <iostream>
#include "externalNamespace.h"
using namespace std;
using namespace animalNames;
int main(){
    cout<<sizeof(cows)/sizeof(cows[0])<<endl;
    for(int i=0;i<sizeof(cows)/sizeof(cows[0]);i++){
        cout<<cows[i]<<endl;
    }
}