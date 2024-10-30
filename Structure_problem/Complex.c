#include<stdio.h>
struct complex{
    float real;
    float img;


};

typedef struct complex Complex;
void show_data(Complex c)
{
    printf("%.2f+%.2fi",c.real,c.img);

}

Complex add(Complex c1,Complex c2)
{
    Complex c;
    c.real=c1.real+c2.real;
    c.img=c1.img+c2.img;
    return c;

}

Complex multiply(Complex c1,Complex c2)
{
    Complex c;
    c.real=c1.real*c2.real-c1.img*c2.img;
    c.img=c1.real*c2.img+c1.img*c2.real;
    return c;
}
int main()
{
    Complex c1={1.3,2.4};
    Complex c2={6,5};

    /*show_data(c1);
    show_data(c2);*/


    show_data(add(c1,c2));
    printf("\n");
    show_data(multiply(c1,c2));
    




return 0;
}