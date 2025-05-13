#include<stdio.h>
double factorial(int num)
{
    if(num==1 || num==0)
        return 1;
    else
        return(num*factorial(num-1));
}
void main()
{
    int a;
    printf("put any number");
    scanf("%d",&a);
    printf("factorial of given number is %0.0lf",factorial(a));
}
