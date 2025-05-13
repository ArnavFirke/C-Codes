#include <stdio.h>
#include<string.h>
void main()
{
    char A[100],B[100];
    int l;
    printf("put string A\n");
    gets(A);
    printf("put string B\n");
    gets(B);       //scanf("%s",b); & is not used
    printf("printing using puts:");
    puts(A);
    l=strlen(A);
    printf("\n\nlength of string is %d",l);
    printf("\nreverse of string A is: ");
    puts(strrev(A));
    printf("\nreverse of string B is: ");
    puts(strrev(B));
    printf("the strcmp for A and B is %d",strcmp(A,B));
    printf("\nstring A and B are joined  ");
    puts(strcat(A,B));




}
