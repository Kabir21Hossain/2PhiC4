#include<stdio.h>
struct point{
    float x,y;

};
struct triangle {
    struct point A;
    struct point B;
    struct point C;

};
struct point centeroid(struct triangle t)
{
    struct point temp;
    temp.x=(t.A.x+t.B.x+t.C.x)/3;
    temp.y=(t.A.y+t.B.y+t.C.y)/3;

return temp;

}
int main()
{
    struct point p1={9,0};
    struct point p2={0,5};
    struct point p3={10,6};
   struct triangle t={p1,p2,p3};
   struct point res=centeroid(t);
   printf("(%0.2f,%0.2f)",res.x,res.y);
   



return 0;
}