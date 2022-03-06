#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    Student(string name,int age){
        this->name=name;
        this->age=age;

    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    

};
kkk
int main()
{
    Student s("Foam",20);
    cout<<"Name:"<<s.getName()<<endl;
    cout<<"Age:"<<s.getAge();
}