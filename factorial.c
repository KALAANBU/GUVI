#include <stdio.h>
int main() {
int b,fact=1,i;
scanf("%d",&b);
for(i=1;i<=b;i++)
{
    fact=fact*i;
}
printf("%d",fact);
}
