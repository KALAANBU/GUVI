
#include<stdio.h>
#include<string.h>
void main()
{
int i=0,len,k=0;
char s[10];
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
    if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4'  || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' ||s[i]=='9')
     {
       k=1;
     }

    }
    if(k==1)
    {
        printf("yes");
    }
}
