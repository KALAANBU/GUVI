#include <stdio.h>
#include<math.h>
void main() {
int i,y,a=0,b=1,t;
scanf("%d",&n);
printf("%d\n%d\n",a,b);
for(i=1;i<y-1;i++)
{
t=a+b;
a=b;
b=t;
printf("%d\t",t);
}

	return 0;
}
