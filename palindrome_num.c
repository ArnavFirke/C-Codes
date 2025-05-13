#include <stdio.h>
void palindrome(int num)
{
    int rev=0,d=num;
    while(num!=0)
    {
        rev=rev*10+num %10;
        num=num/10;
    }
    printf("\nthe reversed number is %d",rev);
    if(rev==d)
        printf("\nthe number is palindrome");
    else
        printf("\nthe number is not palindrome");
}

int main()
{
    int a;
    printf("put any number");
    scanf("%d",&a);
    palindrome(a);
    return 0;
}
