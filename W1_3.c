#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("Please enter radius\n") ;
    scanf("%f", &r);
    d = 2*r;
    c= (2*22*r)/7;
    a = (22*r*r)/7;
    printf("diameter of circle: %f\n" , d);
    printf("circumference of circle: %f\n" , c);
    printf("area of circle: %f\n" , a);
    return 0;
}