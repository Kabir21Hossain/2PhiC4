#include<stdio.h>

int sum(int arr[],int n)
{
    int s=0;

    for(int i=0;i<n;i++)
    {
        s+=(arr[i]%10);
    }
    return s;
}


int main()
{
    FILE * i_file;
    FILE * o_file;
    int n;

    i_file= fopen("input4.txt","r");
    o_file=fopen("output4.txt","w");
   

    if(i_file==NULL)
    {
        printf("File doesn't exist\n");

    }
    else 
    {
       
        fscanf(i_file,"%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            fscanf(i_file,"%d",&arr[i]);

        }

        int result=sum(arr,n);
        fprintf(o_file,"sum= %d",result);




    }
    fclose(i_file);
    fclose(o_file);


return 0;
}