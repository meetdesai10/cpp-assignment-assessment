// WAP to Monday to Sunday using switch case


#include <stdio.h>
int main() {
    int day;
    printf("enter number between 1 to 7\n"); //for take value from user
    scanf("%d",&day);
    switch(day) {  // for printf days if user will enter 2 than will be print tuesday
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day");
    }

    return 0;
}