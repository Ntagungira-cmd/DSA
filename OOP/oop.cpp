#include<iostream>
using namespace std;

class computer{
    private:
        int memorySize;
        string model;
    public:
         computer(int memory=0,string pcModel=""){
            memorySize=memory;
            model=pcModel; 
         }
         void setMemory(string model){
             if(model=="POSITIVO"){
                 memorySize=8;
             }else if(model=="DELL"){
                 memorySize=16;
             }else{
                 memorySize=0; 
             }
         }
         int getMemorySize(){
             return memorySize;
         }    
};

int main(){
    computer comp;
    comp.setMemory("POSITIVO");
    cout<<"Memory: "<<comp.getMemorySize()<<endl;
    return 0;
}