#include<bits/stdc++.h>
using namespace std;
bool is_distinct(int year)
{
    int arr[10]={0};
    while(year>0)
    {
        int ld=year%10;
        arr[ld]++;
        year/=10;

    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]>=2)
        return false;
        
    }
    return true;
}
bool is_leap(int year)
{
    if(year%400==0 || (year%4 && year%100!=0))
    {
        return true;

    }
    else 
    return false;

}
int main()
{
    int year;
    cin>>year;
    if(is_leap(year) && is_distinct(year) )
    cout<<"Leap Year"<<endl;
    else 
    cout<<"Not a leap year"<<endl;

   return 0;
}