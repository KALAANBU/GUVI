#include<stdio.h>
void main()
{
int m,a,b,c,i;
printf("enter the element");
scanf("%d",&m);
a=0;
b=1;
printf("%d",b);
for(i=1;i<=m;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
}
