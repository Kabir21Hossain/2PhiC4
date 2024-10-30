#include<stdio.h>
struct complex{
    float real;
    float img;


};

typedef struct complex Complex;
void show_data(Complex c)
{
    printf("%.2f+%.2f",c.real,c.img);

}

int main()
{
    Complex c1={1.3,2.4};
    Complex c2={6,5};

    show_data(c1);



return 0;
}