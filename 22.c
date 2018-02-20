#include<stdio.h>
int main()
{
int i,m;
float arr[100];
printf("Enter total number of elements(1to 100):");
scanf("%d",&m);
printf("/n");
for(i=0;i<m;i++)
{
printf("Ener the number%d:",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<m;++i)
{
if(arr[0]<arr[i])
arr[0]=arr[i];
}
printf("largest number is %d",arr[0]);
return 0;
}
