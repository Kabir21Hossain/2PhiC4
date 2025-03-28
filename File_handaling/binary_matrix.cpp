// #include<iostream>
// using namespace std;

// int main()
// {
//     ios:: sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,m;
//         cin>>n>>m;

//         int mat[n][m];
//         int odd_rows=0;
//         int odd_cols=0;
//     // row-wise traverse

//         for(int i=0;i<n;i++)
//         {
//             int cnt=0;
//             for(int j=0;j<m;j++)
//             {
                
//                 cin>>mat[i][j];
//                 if(mat[i][j]==1)
//                 cnt++;

//             }
//             if(cnt%2==1) odd_rows++;

//         }

//         // column-wise traverse

//         for(int i=0;i<m;i++)
//         {
//             int cnt=0;
//             for(int j=0;j<n;j++)
//             {
                
//                 cin>>mat[i][j];
//                 if(mat[i][j]==1)
//                 cnt++;

//             }


//             if(cnt%2!=0)
//                 odd_cols++;

//         }


//         cout<<max(odd_cols,odd_rows)<<endl;

    

//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        int odd_rows=0;
        int odd_cols=0;

        cin>>n>>m;


        vector<vector<int>>mat(n,vector<int>(m));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];

            }
        }


        // row-wise traverse

        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                cnt++;
            }

            if(cnt%2==1)
                odd_rows++;
        }

        // column wise traverse

        for(int i=0;i<m;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(mat[j][i]==1)
                cnt++;
            }

            if(cnt%2==1)
            odd_cols++;


        }


        cout<<max(odd_rows,odd_cols)<<endl;
       



    }

    return 0;
}