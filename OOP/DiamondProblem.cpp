#include<iostream>
using namespace std;
class Person {
   // Data members of the person 
public:
    Person(){cout << "constructor is called" << endl;};
    void person(int x)  { cout << "Person::Person(int ) called" << endl;}
};
  
class Faculty:virtual public Person {
   // data members of Faculty
public:
    Faculty(){
       cout<<"Constructor Faculty called"<< endl;
    }
};
  
class Student:virtual public Person {
   // data members of Student
public:
    Student(){
        cout<<"Constructor Student called called"<< endl;
    }
};
  
class TA: public Faculty, public Student{
public:
    //TA(){};
    TA(){
        cout<<"Costructor TA called"<< endl;
    }
};
  
int main(){
    TA ta1;
    ta1.person(20);
}

