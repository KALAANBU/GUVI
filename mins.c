#include <stdio.h>
int main(void) {
	int min;
	int a,m;
	scanf("%d",&min);
	a=min/60;
	m=min%60;
	printf("the hour is %d\n",a);
	if(min%60==0)
	{
	printf("the minutes is 0" );
	}
	else
	printf("the minutes is %d",m);
	return 0;
}
