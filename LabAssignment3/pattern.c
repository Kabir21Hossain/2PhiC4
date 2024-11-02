#include<stdio.h>

void pattern_print(int n,FILE *o_file)
{
    for(int line=1;line<=n;line++)
    {
        for(int space=1;space<=n-line;space++)
        {
            
            fprintf(o_file," ");

        }

        for(int hash=1;hash<=n;hash++)
        {
            fprintf(o_file,"#");
        }
        fprintf(o_file,"\n");

    }
}



int main()
{
    FILE * i_file;
    FILE * o_file;
    int n;

    i_file= fopen("input5.txt","r");
    o_file=fopen("output5.txt","w");


    if(i_file==NULL || o_file == NULL)
        {
            printf("File doesn't exist\n");

        }

    else 
        {
        
            fscanf(i_file,"%d",&n);
            pattern_print(n,o_file);
        }

    fclose(i_file);
    fclose(o_file);


return 0;
}