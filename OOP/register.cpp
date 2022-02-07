#include<iostream>
#include<fstream>
using namespace std;
//enum Gender{MALE,FEMALE};
struct Person{
    string firstName;
    string gender;
}p;

int main(){
cin>>p.firstName;
cin>>p.gender;
fstream my_file;
my_file.open("register",ios::app);
if(!my_file){
    cout<<"Failed to open file";
}else{
    cout<<"file opened"<<endl;
    my_file<<p.firstName<<","<<p.gender<<"\n"<<endl;
    my_file.close();
}
fstream myfile;
myfile.open("register",ios::in);
if(myfile.is_open()){
    char ch;
    while(getline(myfile,ch)){
       cout<<ch;
    };
}
myfile.close();
return 0;
}
