#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    void *ptr;
    typedef int* pointer;
    pointer a1,a2,a3;
    printf("put any two numbers\n");
    scanf("%d%d",&a,&b);
    a1=&a;
    a2=&b;
    a3=&a1;
    printf("\nvalue of a is %d",*a1);
    printf("\nvalue of b is %d",*a2);
    printf("\naddress of a is %d",a1);
    printf("\naddress of b is %d",a2);
    printf("\naddress of pointer to a is %d",a3);

    ptr=&a;
    //printf("\nvalue of a is %d",*ptr);     error
    printf("\nvalue of a is %d",*( (int *) ptr));
    return 0;
}
