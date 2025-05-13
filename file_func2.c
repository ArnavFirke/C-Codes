#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char other='y';
    struct student
    {
        char name[40];
        int no;
        float fees;
    } s;
    fp=fopen("student.txt","wb");
    while(other=='y'|| other=='Y')
    {
        puts("enter the name ");
        gets(s.name);
        puts("\nenter the roll no. ");
        scanf("%d",&s.no);
        puts("\nenter the fees ");
        scanf("%f",&s.fees);
        fwrite(&s,sizeof(s),1,fp);
        puts("\nDo you want to add another record of student?(y/n)");
        fflush(stdin);
        other=getch();  //getch means getting a char not shown on screen
    }
    fclose(fp);
    puts("\n\nData in file \n");
    fp=fopen("student.txt","rb");
    while(fread(&s,sizeof(s),1,fp)==1)
    {
        printf("%s\t%d\t%f\n",s.name,s.no,s.fees);
    }
    fclose(fp);
    return 0;
}
