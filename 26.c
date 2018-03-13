#include<stdio.h>
void main()
{
int a[10],i,j,temp,m;
printf("enter the number");
scanf("%d",&m);
printf("enter the number");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<m;i++)
{
printf("%d",a[i]);
}
}
