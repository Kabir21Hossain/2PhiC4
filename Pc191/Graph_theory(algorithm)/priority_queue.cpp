#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    priority_queue<int>a;
    a.push(-2);
    a.push(-4);
    a.push(3);
    a.push(67);
    a.push(0);


    pq.push(45);
    pq.push(1);
    pq.push(23);
    pq.push(100);
    pq.push(21);
    //cout<<pq.top();
    //cout<<pq.size();
    
    //cout<<pq.empty();
    pq.emplace(600);
   // cout<<pq.top();
    pq.push(2);
    //cout<<pq.top();
    // pq.pop();
    // cout<<pq.top();

   
   
    pq.swap(a);
    


while(!pq.empty())
{
    cout<<pq.top()<<" ";
    pq.pop();

}




   return 0;
}