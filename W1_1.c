#include <stdio.h>
int main()
{
    int a,b;
    int s,s1,m ,mod;
    float d ; 
    printf("Please enter any two numbers: \n");
    scanf("%d%d", &a , &b) ;
    s = a+b ;
    m = a*b;
    d = (float) a/b;
    s1= a-b;
    mod = a%b;
    printf("sum of the two numbers is: %d\n" , s );
    printf("product of the two numbers is: %d\n" , m );
    printf("difference of the two numbers is: %d\n" , s1);
    printf("divison of two numbers is: %f\n" , d);
    printf("modulus of two numbers is: %d\n" ,mod);
    return 0;
}