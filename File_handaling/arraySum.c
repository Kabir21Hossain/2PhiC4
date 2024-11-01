#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    float marks;

};
int main()
{
    FILE * o_file=fopen("output.txt","a");

    typedef struct student std;
    int no_of_student;
    printf("How many student's details you want?\n");
    scanf("%d",&no_of_student);

// file 
    fprintf(o_file,"How many student's details you want? ");
    fprintf(o_file,"%d\n\v",no_of_student);
//end
    std s[no_of_student];
    for(int i=0;i<no_of_student;i++)
    {
        printf("\nEnter the details of student No: %d:\n",i+1);
        printf("\nroll:");
        scanf("%d",&s[i].roll);
        printf("\nName:");
        scanf("%s",s[i].name);
        
        printf("\n Marks:");
        scanf("%f",&s[i].marks);

        // file 

         fprintf(o_file,"\nEnter the details of student No: %d:\n",i+1);
         fprintf(o_file,"\nroll:");
         fprintf(o_file,"%d",s[i].roll);

        fprintf(o_file,"\nName:");
        fputs(s[i].name,o_file);
        fprintf(o_file,"\n Marks:");
        fprintf(o_file,"%.3f",s[i].marks);

    // end


    }


return 0;
}
