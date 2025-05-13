#include <stdio.h>
int main()
{
    int a,d=2;
    printf("put any number");
    scanf("%d",&a);
    while(d<a)
    {
        if(a%d==0)
            break;
        else
            d++;

    }
    if(a==d)
    printf("\nthe number is prime number");

    else
    printf("\nnumber is not prime");
    return 0;
}
