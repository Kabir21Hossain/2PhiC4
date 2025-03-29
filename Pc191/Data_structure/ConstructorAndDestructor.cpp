#include<bits/stdc++.h>
using namespace std;
class student{
string name;
int std_id;
int age;
string father_name;
string mother_name;
public:
void display_info()
{
    cout<<name<<endl;
    cout<<std_id<<endl;
    cout<<age<<endl;
    cout<<father_name<<endl;
    cout<<mother_name<<endl; 
}
 student(string name,int std_id,int age,string father_name,string mother_name)
 {
    this->name=name;
    this->std_id=std_id;
    this->age=age;
    this->father_name=father_name;
    this->mother_name=mother_name;

 }
 student(string name,int age)
 {
    this->name=name;
    this->age=age;

 }
 student(){ }
 ~student()
 {
    cout<<"called";
    display_info();

 }

};
class person{
string name;
person*father,*mother;
public:
person(string name,string fname,string mname)
{
    this->name=name;
    father = new person;
    father->name=fname;
    mother=new person;
    mother = new person;
 
}
void print()
{
    cout<<name<<endl<<father->name<<endl<<mother->name;

}
person()
{

}
~person()
{
    cout<<"called\n";
    delete father;
    delete mother;
}


};
int main()
{
    // student s("kabir",87393,24,"sirajul islam","majeda begum");
    // s.display_info();
    // cout<<endl;
    // student s1("kabir",34);
    // s1.display_info();

person p("a","b","c");
p.print();






return 0;
}