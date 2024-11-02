#include<stdio.h>
#include<stdbool.h>
int  winnerDetector(int a[][4],int n)
{

    for(int i=1;i<=n;i++)
    {
        if(a[i][1]==a[i][2] && a[i][1]==a[i][3] && a[i][1]!=-1)
        return a[i][1];
    }

    for(int j=1;j<=n;j++)
    {
        if(a[1][j]==a[2][j] && a[2][j]==a[3][j] && a[1][j]!=-1)
        return a[1][j];
    }

   if(a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[1][1]!=-1)
   return a[1][1];

    if(a[1][3]==a[2][2] && a[2][2]==a[3][1] && a[1][3]!=-1)
   return a[1][3];

    return -1;

}
void grid(int arr[][4],int n)
{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(arr[i][j]==-1)printf(" ");
           if(arr[i][j]==1)printf("X");
           if(arr[i][j]==2)printf("O");

        
            if(j<n)
            printf("\t|\t");
            

        }
        if(i<n)printf("\n_____________________________________");
        printf("\n");

    }
}
int main()
{
    int n=3;
    int a[4][4]={-1};// to count from 1 to 3

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           a[i][j]=-1;

        }
        

    }

    bool player1=true,player2=false;
    while(true)
    {
         grid(a,n);

        if(player1)
        {
            // compute
            int r,c;
            flag:
            printf("Player1 turn (X),Enter Row and Column: ");
            scanf("%d %d",&r,&c);
            if(a[r][c]!=-1)
            {
                 printf("Invalid move\n");
                 goto flag;
            }
        

             a[r][c]=1;
            player1=false;
            player2=true;

        }

        else
        {
            //compute
            int r,c;
            flag2:
            printf("Player2 turn (O),Enter Row and Column: ");
            scanf("%d %d",&r,&c);
            if(a[r][c]!=-1)
            {
                printf("Invalid move\n");
                goto flag2;
            }
            
            a[r][c]=2;
            player2=false;
            player1=true;

        }

        if(winnerDetector(a,n)==1)
        {
             printf("Player1 is the winner.\n");
             grid(a,n);
             break;


        }
         if(winnerDetector(a,n)==2)
        {

             printf("Player2 is the winner.\n");
             grid(a,n);
             break;

        }
        
        // if(winnerDetector(a,n)==-1)
        // {

        //      printf("Draw!!.\n");
        //      grid(a,n);
        //      break;

        // }
       

    }

return 0;
}