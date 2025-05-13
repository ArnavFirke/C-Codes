#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f,*fp,*f1;
    char str[80],ch,a[50],b[50],ID[50];
    float fees;
    printf("put th data in file\n");
    f=fopen("arnav.txt","w");
    do
    {
        gets(str);    //gets means getting the string
        fputs(str,f);  //fputs means putting the string
    }
    while(strlen(str)!=0);
    fclose(f);
    printf("\ndata in file is\n");
    f=fopen("arnav.txt","r");
    while(fgets(str,80,f)!=NULL)
    {
        printf("%s",str);
    }
    fclose(f);
    printf("\n\nput data in second file\n");
    fp=fopen("arnav1.txt","w");
    while(1)
    {
        ch=getchar();
        if(ch==EOF)      //EOF aka end of file is ctr+c
            break;
        fputc(ch,fp);    //fputc means putting char by char
    }
    fclose(fp);
    printf("\ndata in file is\n");

    fp=fopen("arnav1.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)      //EOF aka end of file is ctr+c
            break;
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nput data in third file\n");
    f1=fopen("arnav2.txt","w");
    for(int i=1;i<3;i++)
    {
        fflush(stdin);
        puts("\nenter the ID ");
        gets(ID);
        fflush(stdin);
        puts("\nenter the name");
        scanf("%[^\n]",a);
        puts("\nenter fees");
        scanf("%f",&fees);
        fprintf(f1,"%s %s\t%f\n",ID,a,fees);
    }
    fclose(f1);
    f1=fopen("arnav2.txt","r");
    while(fscanf(f1,"%s*%s*%s",b)==1)
        printf("%s\t",b);
    fclose(f1);
    return 0;
}
