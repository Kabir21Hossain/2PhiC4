#include<stdio.h>
#include<stdbool.h>

bool is_leapYear(int n)
{
    if(n%400==0 || (n%4==0 && n%100!=0))
    {
        return true;
    }
    return false;
    


}
int main()
{

    FILE * i_file;
    FILE* o_file;
    int year;

    i_file=fopen("input6.txt","r");
    o_file=fopen("output6.txt","a");

    if(i_file==NULL ||  o_file==NULL)
    {
        return 0;

    }


    fscanf(i_file,"%d",&year);
    bool check=is_leapYear(year);
    if(check)
    {
        fprintf(o_file,"%d-->YES\n",year);
    }
    else 
    {
        fprintf(o_file,"%d-->NO\n",year);

    }




    fclose(i_file);
    fclose(o_file);


return 0;
}