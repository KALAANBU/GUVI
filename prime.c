#include <stdio.h>
void main()
{
   int n,i;
   printf("Enter the value for a:");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
     if(n%i==0)
     break;
   }
     if(n==i)
     printf("%d is a prime number",n);
     else
     printf("%d is a not prime number",n);
}

