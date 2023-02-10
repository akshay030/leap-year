#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if (year%400==0 || year%4==0 && year%100!=0)
    {
        printf("leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}