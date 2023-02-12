#include <stdio.h>
struct stu
{
    int roll;
    char name[20];
    float marks;
};
struct stu s[3];
int main()
{
    int i;
    printf("enter student record \n");
    for (i = 0; i < 3; i++)
    {
        printf("enter roll no\n");
        scanf("%d", &s[i].roll);
        printf("\n enter name \n");
        scanf("%s", &s[i].name);
        printf("\n enter marks\n ");
        scanf("%f", &s[i].marks);
    }
    printf("entered data \n");
    for(i=0;i<3;i++)
    {
        printf(" \nrollno is :%d",s[i].roll);
         printf(" \n  name is : %s",s[i].name);
          printf(" \n  marks is : %f",s[i].marks);
    }
}
