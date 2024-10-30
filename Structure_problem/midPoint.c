#include<stdio.h>
struct point 
{
    float x,y;

};
typedef struct point Point;
Point mid(Point p1,Point p2)
{
    Point p;
    p.x=(p1.x+p2.x)/2;
    p.y=(p1.y+p2.y)/2;
    return p;

}
int main()
{
    Point p1={1,2};
    Point p2={-4,5};
    Point p3=mid(p1,p2);
    printf("(%0.3f,%0.3f)",p3.x,p3.y);

    

return 0;
}