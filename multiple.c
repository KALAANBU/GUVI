#include<stdio.h>
#include<string.h>
void main()
{
  int a,i;
  scanf("%d",&a);
  for(i=1;i<=5;i++)
  {
     printf("%d * %d = %d\n",a,i,(a*i));
   }
   return 0;
 }
