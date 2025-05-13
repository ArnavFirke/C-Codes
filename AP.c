#include <stdio.h>

int main()
{
float a,d,n,m,p=1;

printf("put the first term i.e. a");
scanf("%f",&a);
printf("\nput the common difference i.e. d");
scanf("%f",&d);
printf("\nput the number of terms i.e. n");
scanf("%f",&n);
do{

      m=a+p*d-d;
      printf("%f\t",m);
      p++;
}while(p<n+1);
}
