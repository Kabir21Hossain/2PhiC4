#include<stdio.h>
int main()
{
    FILE *i_file;
    FILE*o_file;
    i_file=fopen("input1.txt","r");
    o_file=fopen("output1.txt","w");
    if(i_file==NULL)
    {
        printf("file doesn't extst\n");
    }
    else
    {
        char ch;
        while((ch=fgetc(i_file))!=EOF)
        {
            fprintf(o_file,"%c",ch);
        
            

        }


    }

    fclose(i_file);
    fclose(o_file);


return 0;
}