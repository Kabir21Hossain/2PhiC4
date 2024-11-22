#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        
        string name;
        int id;
        int age;
        float marks;

        Student(){}

        Student(string name,int id,int age,float marks)
        {
            this->name=name;
            this->id=id;
            this->age=age;
            this->marks=marks;

        }

        void take_input()
        {
            string n;
            int i,a;
            float m;
            cout<<"Enter your name:\n";
            cin>>n;
            cout<<"Enter your id:\n";
            cin>>i;
            cout<<"Enter your age:\n";
            cin>>a;
            cout<<"Enter your marks\n";
            cin>>m;
            name=n;
            id=i;
            age=a;
            marks=m;

        }

        void print_info()const
        {
            cout<<"id:"<<id<<" "<<"name:"<<name<<" "<<"marks: "<<marks<<" "<<"age: "<<age<<" "<<endl;

        }
        bool operator <(Student a)
        {
            return marks>a.marks;
        }

        ~Student(){}

    

};
// bool comp(Student s1,Student s2)
// {
//     return s1.marks>s2.marks;
// }

int main()
{
   vector<Student>s;

    for(int i=1;i<=3;i++)
    {
        s.push_back(Student("kabir",124-i,23,60.00+i-20.4));
    }
    cout<<endl;

    for(int i=0;i<3;i++)
    {
        s[i].print_info();
    }

    cout<<"\n\nAfter Sorting:\n";

    //sort(s.begin(),s.end(),comp);
    sort(s.begin(),s.end());

    for(int i=0;i<3;i++)
    {
        s[i].print_info();
    }



   return 0;
}