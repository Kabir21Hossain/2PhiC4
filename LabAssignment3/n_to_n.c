#include<stdio.h>
int main()
{
    FILE *i_file;
    FILE * o_file;
    int t,n;
    i_file=fopen("input3.txt","r");
    o_file=fopen("output3.txt","w");
    if(i_file==NULL)
    {
        printf("FIle doesn't exist\n");

    }

    else
    {
        fscanf(i_file,"%d",&t);
        
        for(int i=1;i<=t;i++)
        {
            fscanf(i_file,"%d",&n);
            if(n>0)
            {
                for(int j=n;j>=(-n);j--)
                {
                    fprintf(o_file,"%d ",j);
                }
                fprintf(o_file,"\n");
            }

            else 
            {
                for(int j=n;j<=(-n);j++)
                {
                     fprintf(o_file,"%d ",j);
                }
                 fprintf(o_file,"\n");
            }
        }

    }
    fclose(i_file);
    fclose(o_file);


return 0;
}