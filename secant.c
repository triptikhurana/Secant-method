#include <stdio.h>
#include <math.h>
#define e 0.001
#define f(x) x*x-3
void main ()
{
    int i=0;
    float x0,x1,x2,f0,f1,f2;
    printf("enter x0 and x1: ");
    scanf("%f %f",&x0,&x1);
    do 
    {
        f0=f(x0);
        f1=f(x1);
        f2=f(x2);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        f0=f1;
        f1=f2;
        x0=x1;
        x1=x2;
        i++;
        printf("no of iteration = %d\n",i);
        printf("root = %f",x2);
        printf("\tfunction value = %f\n",f2);
    }
    while(fabs (f2) > e);
}