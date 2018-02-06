#include<stdio.h>
void main()
{
    int m=0,tem,n,b;
    scanf("%d",&n);
    tem=n;
    while(tem!=0)
    m=tem%10;
    b=m*10+m;
    n/=10;
    if(b==n)
     printf("%dpalindrome",n);
        else
        printf("%dnot palindrome",n);
    
    
    
}
