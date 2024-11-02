#include<stdio.h>
int main()
{
    FILE * i_file;
    FILE * o_file;
    i_file= fopen("input2.txt","r");
    o_file=fopen("output2.txt","w");
    int n;
    if(i_file==NULL)
    {
        printf("File doesn't exist\n");

    }
    else 
    {
        fscanf(i_file,"%d",&n);
        for(int i=1;i<=n;i++)
        {
            fprintf(o_file,"%d ",i);
            
        }



    }
    fclose(i_file);
    fclose(o_file);


return 0;
}