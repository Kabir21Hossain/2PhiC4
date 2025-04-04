#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int v,e;

vector<vector<int>>adj_list,rev_adj,scc;
vector<bool>visited;
stack<int>st;

void dfs1(int x){

    visited[x]=true;

    for(int node:adj_list[x]){

        if(!visited[node]){
            dfs1(node);


        }

        
    }

    st.push(x);
}


void dfs2(int x, int cnt){

    visited[x]=true;
    scc[cnt].push_back(x);

    for(int i: rev_adj[x]){

        if(!visited[i]){
            dfs2(i, cnt);


        }
    }
}

int count_scc(){

    int cnt=0;

    visited.assign(v,false);

    for(int i =0 ; i < v ; i++){

        if(!visited[i]){

            dfs1(i);

        }
    }


    visited.assign(v,false);

    while(!st.empty()){

        int x=st.top();
        st.pop();
        
        
            if(!visited[x]){

                dfs2(x,cnt);
                cnt++;
 
        }

    }



return cnt;


}



int main(){
    cout<<"Enter number of vertices and edges:";
    cin>>v>>e;

    adj_list.resize(v);
    rev_adj.resize(v);
    visited.resize(v);
    scc.resize(v);



    cout<<"Enter edges:\n";

    for(int i = 0 ; i < e ; i++){
        int u,v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        rev_adj[v].push_back(u);

    }

    cout<<"Number of scc: "<<count_scc();


    cout<<endl<<"SCC's are\n";

    for (int i = 0; i < scc.size(); i++) {
        if (!scc[i].empty()) {  // Only print non-empty SCCs
            cout << "SCC " << i + 1 << ": ";
            for (int node : scc[i]) {
                cout << node << " ";
            }
            cout << endl;
        }
    }




   return 0;

}



