#include <iostream>
using namespace std;
namespace animalNames{
    string cows[]={"Ibihogo","Isine","Igaju"};
    string cats[]={"Tom","Kitten","Catsy"};
}
using namespace animalNames;
int main(){
    cout<<sizeof(cows)/sizeof(cows[0])<<endl;
    sizeof(cows[0])<<endl;
    for(int i=0;i<sizeof(cows)/sizeof(cows[0]);i++){
        cout<<cows[i]<<endl;
    }
}