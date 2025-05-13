#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replaceword(char *str,char *oldword,char *newword)
{
    char *resultstring;
    int i,count=0;
    int oldwordlength= strlen(oldword);
    int newwordlength= strlen(newword);
    for(i=0; str[i]!='\0'; i++)
    {
        if(strstr(&str[i],oldword)==&str[i])
        {
            count++;
            i=i+ oldwordlength -1;
        }
    }
    resultstring=(char*)malloc(i+count * (newwordlength-oldwordlength)+1);
    i=0;
    while(*str)
    {
        if(strstr(str,oldword)==str)
        {
            strcpy(&resultstring[i],newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i]=*str;
            i+= 1;
            str+= 1;
        }
    }
    resultstring[i]='\0';
    return resultstring;
}
int main()
{
    char str[200];
    FILE *ptr,*ptr2;
    ptr=fopen("bill.txt","r");
    ptr2=fopen("genbill.txt","w");
    fgets(str,200,ptr);
    printf("The given bill template was: %s\n",str);

    char *newstr;

    newstr=replaceword(str,"[item]","shoes");
    newstr=replaceword(newstr,"[name]","Arnav");
    newstr=replaceword(newstr,"[shop]","Demart");


    printf("The actual bill generated is: %s\n",*newstr);
    //printf("the generated bill is in genbill.txt");
    fprintf(ptr2,"%s",newstr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}
