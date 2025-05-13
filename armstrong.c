#include <stdio.h>
void main()
{
    int a,b,c,s,m,d;
    printf("put any 3 digit number");
    scanf("%d",& a);
    m=a;
    b=a%10;
    b=b*b*b;
    a=a/10;
    c=a%10;
    c=c*c*c;
    a=a/10;
    d=a%10;
    d=d*d*d;

    s=b+c+d;
    if(s==m){
            printf("\nThis is an armstrong number");
    }
    printf("\n\nSum of cubes of digits is %d", s);
}
