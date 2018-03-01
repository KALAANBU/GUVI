#include <stdio.h>
int main(void) {
	int min;
	int r,m;
	scanf("%d",&min);
	r=min/60;
	m=min%60;
	printf("the hour is %d\n",r);
	if(min%60==0)
	{
	printf("the minutes is 0" );
	}
	else
	printf("the minutes is %d",m);
	return 0;
}
