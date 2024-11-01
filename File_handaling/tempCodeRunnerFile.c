#include <stdio.h>
int main()
{
    int n,sum=0;

   FILE * in_file;
   FILE * o_file;
   in_file=fopen("kin.txt","r");
   o_file=fopen("kout.txt","w");
   if(in_file==NULL || o_file==NULL)
   {
    printf("Opening error\n");
    return 0;
   }

   fscanf(in_file,"%d",&n);
   fprintf(o_file,"%d\n",n);
   for(int i=0;i<n;i++)
   {
    int a;
    fscanf(in_file,"%d",&a);
    sum+=a;
    fprintf(o_file,"%d ",a);

   }
   printf("sum=%d",sum);
   fprintf(o_file,"\nsum->%d",sum);
   
    return 0;
}
