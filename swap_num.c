#include <stdio.h>
#include <stdlib.h>
void swap(float *x,float *y)
{
    float d;
    d=*x;
    *x=*y;
    *y=d;
}
int main()
{
    float a,b;
    printf("put any two numbers ");
    scanf("%f%f",&a,&b);
    printf("\nbefore swapping value of a is %0.3f",a);
    printf("\nbefore swapping value of b is %0.3f",b);
    swap(&a,&b);
    printf("\nafter swapping value of a is %0.3f",a);
    printf("\nafter swapping value of b is %0.3f",b);

    return 0;
}
