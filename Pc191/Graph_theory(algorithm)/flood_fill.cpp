/*
5 8
########
#..#...#
####.#.#
#..#...#
########
output->3

*/



#include<bits/stdc++.h>
using namespace std;
const int N=2000;
int grid[N][N];
int visited[N][N];

int n,m;

int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

bool is_inside(pair<int,int>co)
{

    int x=co.first;
    int y=co.second;

    if(x>=0 && x<n && y>=0 && y<m)
    {
        return true;
    }
    else return false;

}

bool is_safe(pair<int,int>co)
{
    int x=co.first;
    int y=co.second;
    if(grid[x][y]==-1)
    {
        return false;
    }
    else return true;


}


void bfs(pair<int,int>src)
{
    queue<pair<int,int>>q;
    q.push(src);
    visited[src.first][src.second]=1;
   

    while(!q.empty())
    {
        pair<int,int>head;
        head=q.front();
        q.pop();

        int x=head.first;
        int y=head.second;

        for(int i=0;i<4;i++)
        {
            int new_x=x+dx[i];
            int new_y=y+dy[i];

            pair<int,int>adj_node={new_x,new_y};
            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y]==0)
                {
                    visited[new_x][new_y]=1;
                  
                    q.push(adj_node);


                }

        }

    }

}


pair<int,int> find_unvisited(){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]==0 && grid[i][j]==0)
            {
                return {i,j};

            }
        }
    }

    return {-1,-1};
}
int main()
{
  
    int room_cont=0;

    cin>>n>>m;
   
    pair<int,int>src,dst;


    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        for(int j=0;j<m;j++)
        {
            if(s[j]=='#')
            {
                grid[i][j]=-1;
            }

           
        }

    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            cout<<grid[i][j]<<"\t";

        }
        cout<<"\n";

    }

    while(1)
    {
       pair<int,int>unvisited_pos=find_unvisited();
       if(unvisited_pos==pair<int,int>(-1,-1)){
        break;

       } 
       bfs(unvisited_pos);
       room_cont++;
    }
 
cout<<room_cont;
   


   return 0;
}
