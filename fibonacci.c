#include <stdio.h>

int main()
{
    float n,a=0,b=1,c;
    printf("Enter the limit of series ");
    scanf("%f",&n);
    for (int i=1;i<=n;i++)
    {
        printf("%0.0f \t",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
