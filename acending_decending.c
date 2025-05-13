#include<stdio.h>
void main()
{
float a,c[5],b[5];
printf("Enter any 5 number ");
for(int i=0;i<5;i++)
scanf("%f",&c[i]);
for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++)
    {
        if(c[i]<c[j])
          {
            a=c[i];
            c[i]=c[j];
            c[j]=a;
          }
    }
}
printf("\nThe decending order is:");
for(int i=0;i<5;i++)
printf("\n%0.0f",c[i]);

for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++)
    {
        if(c[i]>c[j])
          {
            a=c[i];
            c[i]=c[j];
            c[j]=a;
          }
    }
}
printf("\n");
printf("\nThe acending order is:");
for(int i=0;i<5;i++)
printf("\n%0.0f",c[i]);

}
