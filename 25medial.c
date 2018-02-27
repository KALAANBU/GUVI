#include<stdio.h>
int main()
{
	int s,a[100],i,mid,j,median;
	printf("\n enter the size of an array");
	scanf("%d",&s);
	printf("\n enter the elements of an array");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i--)
  {
  for(j=s-1;j<s;j++)
  {
  mid=a[i]+a[j]/2;
  median=a[mid];
  printf("%d",&median);
  }
  }
  return 0;
  }
