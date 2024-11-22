#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    int age;
    Student():name(" "),id(0),age(0){}
    Student(string name,int id,int age){
        this->name=name;
        this->id=id;
        this->age=age;

    }
    void take_input(){
        string n;
        int i,a;
       getline(cin,n);

        name=n;
        cin>>i>>a;
        id=i;
        age=a;
    }

    void print_info()const
    {
        cout<<name<<" "<<id<<" "<<age<<endl;
    }

    ~Student(){}


};
int main()
{
    Student *s=new Student;
    (*s).take_input();
    (*s).print_info();


   return 0;
}