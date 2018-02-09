#include<stdio.h>
void main()
{
    int a,b,c,d,e=0;
    scanf("%d",&a);
    a=b;
    while(b !=0)
    c=b%10;
    e+ =c*c*c;
    e/=10;
    if(a==e)
    printf("%d is armstrong",d);
    else 
    printf("%d is not armstrong",d);
}
