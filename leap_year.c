#include <stdio.h>

int main() {
    signed int year ;
    scanf("%d", &year);
    if(year>0)
    {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        printf("Yes, %d is a leap year.",year);
    } else 
    {
        printf("No, %d is not a leap year.",year);
    }
    }
        else
            printf("The given year %d is Invalid year.",year);

    return 0;
}
