#include<iostream>
using namespace std;

enum Gender{MALE,FEMALE};
struct Person{
    string firstName;
    Gender gender;
};

int main(){
    string firstName;
    string gender;
    cout<<"********************Enter Person Details************** "<<endl;
    Person persons[2];
    for (int i=0; i<2; i++){
       cout<<"Enter person "<<i+1<<" first Name"<<endl;
       cin>>firstName;
       cout<<"Enter Person "<<i+1<<" gender"<<endl;
       cin>>gender;
       Person p={};
       p.firstName=firstName;
       if(gender.compare("MALE")==0){
           p.gender=MALE;  
       }else{
           p.gender=FEMALE;
       }
       persons[i]=p;
    }
        string Gend;
    for(int i=0; i<2; i++){
        cout<<"************** Person "<<i+1<<" *******************"<<endl;
        cout<<"First Name: "<<persons[i].firstName<<endl;
        if(persons[i].gender==0){
        cout<<"Gender: MALE"<<endl;
        }else{
        cout<<"Gender: FEMALE"<<endl; 
        }
    }
}