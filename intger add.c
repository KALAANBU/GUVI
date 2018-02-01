#include<stdio.h>
void main()
{
    int sum=0;
    int a,b,c,d,e,i,j;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    for(j=0;j<2;j++)
    sum=sum+a[i];
    printf("%d",sum);
    }
}
