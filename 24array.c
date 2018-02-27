#include<stdio.h>
void main()
{
int a[10],i,j,u,temp;
printf("enter limit");
scanf("%d",&u);
printf(" enter the number");
for(i=0;i<u;i++)
{
scanf("%d",&a[i]);
}
printf("sorted array");
for(i=0;i<u;i++)
{
for(j=1;j<u;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
}
for(i=0;i<u;i++)
{
printf("%d\n",a[i]);
}
}
