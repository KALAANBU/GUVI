#include <stdio.h>

int main(void) 
{
	int b[10],i,n,min;
	printf("\nenter the number ");
	scanf("%d",&n);
	printf("\nenter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		
	}
	min=b[0];
	for(i=1;i<n;i++)
	{
	if(b[i]<min)
{
	min=b[i];
}
}
printf("\nminimum value is %d",min);
	return 0;
}
