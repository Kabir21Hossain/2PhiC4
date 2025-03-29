#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    int age;
    Student(){}
    //Student():name(" "),id(0),age(0){}
    Student(string name,int id,int age){
        this->name=name;
        this->id=id;
        this->age=age;

    }
    void take_input(){

                        string n;
                        int i,a;
                        //getline(cin,n);
                        cin>>n>>i>>a;
                        id=i;
                        age=a;
                        name=n;
    }

    void print_info()const
    {
        cout<<name<<" "<<id<<" "<<age<<endl;
    }

    ~Student(){}


};
int main()
{
    Student s[3];
    for(int i=0;i<3;i++)
    {
       // s[i]=Student("kabir",i,89+i);
       s[i].take_input();


    }
    for(int i=0;i<3;i++)
    {
        s[i].print_info();
        cout<<endl;

    }

   return 0;
}