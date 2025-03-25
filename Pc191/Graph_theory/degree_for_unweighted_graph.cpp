#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N=1e5;
int visited[N];
vector<int>adj_list[N];
int degree[N];

int main()
{
    int v,e;
    cout<<"Enter the number of vertices:";
    cin>>v;
    cout<<"Enter the number of edges:";
    cin>>e;

    cout<<"Enter the edges and weight:\n";
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    
    }
   
    for(int i=0;i<v;i++)
    {
        degree[i]=adj_list[i].size();
        
    }

    for(int i=0;i<v;i++)
    {
        cout<<i<<" th node: degree: "<<degree[i]<<" \n";

    }
    

    
    


    return 0;
}

/*

Enter the number of vertices:6
Enter the number of edges:9
Enter the edges and weight:
0 1
0 3
1 3
1 4
3 4
3 5
4 5
4 2
5 2
0 th node: degree: 2
1 th node: degree: 3
2 th node: degree: 2
3 th node: degree: 4
4 th node: degree: 4
5 th node: degree: 3


*/