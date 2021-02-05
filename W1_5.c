#include<stdio.h>
#include<ctype.h>
int main()
{
    char c,c1;
    printf("Please enter an alphabet \n");
    scanf("%c" , &c);
    c1=tolower(c);
    switch(c1)
    {
        case 'a':
        printf("Vowel");
        break;
        case 'e':
        printf("Vowel");
        break;
        case 'i':
        printf("Vowel");
        break;
        case 'o':
        printf("Vowel");
        break;
        case 'u':
        printf("Vowel");
        break;
        default:
        printf("Its a consonant");
    }
    return 0;

    }