#include<stdio.h>
struct student 
{
    int roll;
    char name[40];
    float mark;


};

typedef struct student Student;

void take_data( Student *s)
{
    scanf("%d",&s->roll);
    scanf("%s",s->name);
    scanf("%f",&s->mark);

}

void show_data( Student *s)
{
    printf("%d\n",s->roll);
    printf("%s\n",s->name);
    printf("%f\n",s->mark);

}

int main()
{
    Student s[2];
    printf("Enter the details of students:\n");
    for(int i=0;i<2;i++)
    {
        take_data(&s[i]);

    }

     for(int i=0;i<2;i++)
    {
        show_data(&s[i]);
        printf("\n");
        
    }
return 0;
}