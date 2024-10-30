#include<stdio.h>
#include<math.h>
struct point
{
    int x,y;
    
};

int Manhattan(struct point p1,struct point p2)
{int a=fabs(p1.x-p2.x)+fabs(p1.y-p2.y);
    return a;
}

int main()
{
    struct point p1,p2;
    scanf("(%d,%d)\n",&p1.x,&p1.y);
     scanf("(%d,%d)",&p2.x,&p2.y);
     int solution=Manhattan(p1,p2);
     printf("%d\n",solution);



return 0;
}