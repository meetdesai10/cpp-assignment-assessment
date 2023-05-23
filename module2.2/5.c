
// WAP Vowel or Consonant using switch case


#include<stdio.h>
int main()
{
    char character;
    printf("enter the character => ");
    scanf("%c",&character);

    switch (character)
    {
    case 'a':
        printf("'%c' is a vowel",character);
        break;
    case 'A':
        printf("'%c' is a vowel",character);
        break;
    case 'e':
        printf("'%c' is a vowel",character);
        break;
    case 'E':
        printf("'%c' is a vowel",character);
        break;
    case 'i':
        printf("'%c' is a vowel",character);
        break;
    case 'I':
        printf("'%c' is a vowel",character);
        break;
    case 'o':
        printf("'%c' is a vowel",character);
        break;
    case 'O':
        printf("'%c' is a vowel",character);
        break;
    case 'u':
        printf("'%c' is a vowel",character);
        break;
    case 'U':
        printf("'%c' is a vowel",character);
        break;
    default:
        printf("consonant");
        
    }

    return 0;
}