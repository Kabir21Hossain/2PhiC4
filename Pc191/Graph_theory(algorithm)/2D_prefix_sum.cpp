#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> build_prefix_sum(vector<vector<int>> & arr){

    int n= arr[0].size();

    vector<vector<int>>parr(n+1,vector<int>(n+1));

    for( int i = 0 ; i < n+1; i++){
        for( int j = 0 ; j < n+1 ; j++){
            parr[i][j]=0;


        }
    }

    for( int i=1 ; i < n+1 ; i++){
        for( int j =1 ; j < n+1 ; j++){
            parr[i][j]=arr[i-1][j-1]+parr[i][j-1]+parr[i-1][j]-parr[i-1][j-1];
        }
    }

    return parr;



}
int main()
{
    int n; 
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(n));
    for ( int i = 0 ; i < n ; i ++){
       for( int j = 0 ; j < n ; j++){
        cin >> arr[i][j];

       }
    }

    vector<vector<int>>parr=build_prefix_sum(arr);

    int r1,c1,r2,c2;
    cin>> r1 >> c1 >> r2 >> c2;

    int x= parr[r2][c2]-parr[r2][c1-1]- parr[r1-1][c2]+parr[r1-1][c1-1];

    cout<< x<< endl;






   return 0;
}