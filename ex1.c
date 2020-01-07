#include<stdio.h>

int main()
{
    double b;
    double c;
    double a;

    scanf("%lf %lf",&b,&c);
     
    a=(b+c)*(b+c);

    printf("%.2lf",a);
    

    return 0;
}