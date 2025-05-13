#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,n;
    printf("enter the size of array you want\n");
    scanf("%d",&n);
    //ptr=(int*)malloc(n*sizeof(int));  or
    ptr=(int*)calloc(n,sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("enter the elements\n");
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("the elements are %d\n",ptr[i]);
    }
    free(ptr);    //free size associate with ptr
    return 0;
}
