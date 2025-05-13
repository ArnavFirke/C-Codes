#include <stdio.h>
#include <stdlib.h>
struct detail
{
    char add[100];
    float fees;
} d;
struct student
{
    char name[100];
    int roll_no;
    struct detail d;
};

int main()
{
    struct student s[3];
    printf("Welcome to School of Scholars ");
    printf("\nput you details here ");
    for(int i=0;i<2;i++)
    {
        printf("\nput you name here:");
        fflush(stdin);
        gets(s[i].name);
        printf("\nput your roll_no:");
        scanf("%d",&s[i].roll_no);
        printf("\nput you fees here:");
        scanf("%f",&s[i].d.fees);
        printf("\nput you address here:");
        fflush(stdin);
        gets(s[i].d.add);
    }
    for(int i=0;i<2;i++)
    {
        printf("\n your name is: %s",s[i].name);
        printf("\nyour roll_no is: %d",s[i].roll_no);
        printf("\nyour fees is: %0.2f",s[i].d.fees);
        printf("\n your address is: %s\n",s[i].d.add);
    }
    return 0;
}
