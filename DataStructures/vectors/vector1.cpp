#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>myVector={5,2,3,7,8};
    for(int i: myVector){
        cout<<i<<" ";
    };
    cout<<endl;
    //vector with for loop
    vector<int>myVector2={12,34,6,8,1,9};
    cout<<"Value at position "<<1<<" "<<myVector2.at(0)<<endl;
    for(int j=0; j<=myVector.size(); j++){
        cout<<myVector2.at(j)<<" ";
    };
    cout<<endl;
    int arr1[]={1,2,5,87,9,9};
    for(int& k: arr1){
        cout<<k<<" ";
    }
}