#include<stdio.h>
int main()
{
    FILE * read=fopen("output.txt","r+");
    char ch;
    while(!feof(read))
    {
        // if(ch==EOF)
        // {
        //     break;
        // }
       // else 
       // {
           // ch=fgetc(read);
           fscanf(read,"%c",&ch);

            printf("%c",ch);


        //}
    }
    rewind(read);
    fseek(read,8,SEEK_CUR);
    printf("\n\n\n\n%d",ftell(read));

return 0;
}
