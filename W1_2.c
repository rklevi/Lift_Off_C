#include<stdio.h>
int main()
{
    float a,b;
    printf("Please enter temperature in celsius \n");
    scanf( "%f", &a ) ;
    b= (a*9)/5 + 32 ;
    printf("The temperature in fahrenheit is: %f\n" , b);
return 0;
}