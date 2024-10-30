#include<stdio.h>
#include<math.h>
struct point 
{
    int x,y;
};

float distance(struct point   p1,struct point p2)
{
    return sqrt(pow((p1.x-p2.x),2))+(pow((p1.y-p2.y),2));
}

int main()
{
    typedef struct point p;
    p p1,p2;
    printf("Enter the values of point p1:");
    scanf("%d%d",&p1.x,&p1.y);
    printf("Enter the values of point p2:");
    scanf("%d%d",&p2.x,&p2.y);
    
    float result=distance(p1,p2);
    printf("%f",result);

    return 0;
}
