#include<stdio.h>
int main()
{
int n,m,i,j,re;
scanf("%d %d",&n,&m);
for(i=n;i<m;i++)
{
int p=i,sum=0;
for(j=0;p!=0;j++)
     {
      rem=p%10;
      sum=sum+re*re*re;
      p=p/10;
     
     }
     if(sum==i)
     printf("%d\n",sum);
