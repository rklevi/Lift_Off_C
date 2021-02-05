#include<stdio.h>
int main()
{
int phy,chem,bio,maths,comp;
float p;
printf("Please enter the marks of Physics \n");
scanf("%d" , &phy);
printf("Please enter the marks of chemistry \n");
scanf("%d" , &chem);
printf("Please enter the marks of biology \n");
scanf("%d" , &bio);
printf("Please enter the marks of mathematics \n");
scanf("%d" , &maths);
printf("Please enter the marks of computer \n");
scanf("%d" , &comp);
p = (float)(phy+chem+bio+maths+comp)/5;
printf("percentage is : %.2f\n", p);
if (p>= 90)
printf("Grade A" );
if(p>=80 && p<90)
printf("Grade B" );
if(p>=70 && p<80)
printf("Grade C" );
if(p>=60 && p<70)
printf("Grade D");
if(p>=40 && p<60)
printf("Grade E");
if(p<40)
printf("Grade F");
return 0;
}