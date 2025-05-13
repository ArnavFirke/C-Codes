#include <stdio.h>
#include <stdlib.h>
#define pi 3.14      //value of pi is fixed
float c=34;       //global variable  can be used in any function and main
int main()
{
    float a;
    static float e=12.12;      //if not given value,take value 0
    //it preserve the initial value even it go out of scope
    //static var can only be initialized using constant literals

    float d=10.26;    //local variable can be used only in main or only in function
    const float b=1.23;    //value of b is fixed
    printf("put any value of a");
    scanf("%f",&a);
    printf("\nvalue of a is %0.3f",a);
    printf("\nvalue of b is %0.3f",b);
    printf("\nvalue of d is %0.3f",d);
    printf("\nvalue of PI is %0.2f",pi);
    printf("\nvalue of e is %0.2f",e);


    return 0;
}
