#include<stdio.h>
//no argument, no return value
void wel()
{
    printf("Welcome to functions program");
}
// argument, no return value
void star(int a)
{
 printf("*");
}
//no argument,return value
float num()
{
    float c;
    printf("\nput any number");
    scanf("%f",&c);
    return c;
}
//argument, return value
float mult(float a,float b)
{
    float c;
    c=a*b;
    return c;
}
int main()
{
    wel();
    float x,y,z,k;
    float (*fp)(float,float);  //declaration of function pointer
    fp=&mult;                 //creating function pointer
    printf("\nput the first number");
    scanf("%f",&x);
    printf("put the second number");
    scanf("%f",&y);
    //z=mult(x,y); or
    z=(*fp)(x,y);            //dereferencing function pointer
    printf("multiplication is %0.2f",z);

    k=num();
    printf("Entered number is %0.2f",k);

    int aa;
    printf("\nput the number of rows");
    scanf("%d",&aa);
    for(int i=0; i<=aa; i++)
    {
        for(int j=0; j<i; j++)
        {
            star(aa);
        }
        printf("\n");
    }
return 0;
}
