#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        string arr[10];

        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                char ch=arr[i][j];
                if(ch=='X')
                {
                    if(((i==0 || i==9) && (j>=0 && j<=9)) || ((j==0 || j==9) && (i>=0 && i<=9)))
                        sum+=1;
                    
                    else if(((i==1 || i==8) && (j>=1 && j<=8)) || ((j==1 || j==8) && (i>=1 && i<=8)))
                        sum+=2;

                    else if(((i==2 || i==7) && (j>=2 && j<=7)) || ((j==2 || j==7) && (i>=2 && i<=7)))
                        sum+=3;

                    else if(((i==3 || i==6) && (j>=3 && j<=6)) || ((j==3 || j==6) && (i>=3 && i<=6)))
                        sum+=4;
                    else if(((i==4 || i==5) && (j>=4 && j<=5)) || ((j==4 || j==5) && (i>=4 && i<=5)))
                        sum+=5;
                }

            }

        }

        cout<<sum<<endl;


    }
   return 0;
}