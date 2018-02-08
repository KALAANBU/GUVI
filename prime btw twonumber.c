#include <stdio.h>
void main()
{
    int a,b,i,d,j;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    printf("Prime numbers between %d and %d are: ",a,b);
    for(j=a+1;j<b;j++)
    {
        d=0;
        for(i = 2;i<=j/2;++i)
        {
            if(j% i == 0)
            {
                d= 1;
                break;
            }
        }
        if (d == 0)
        printf("%d ",j);
       }
}
