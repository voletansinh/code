#include<stdio.h>
int main()
{
	int n,i,gt;
	printf("nhap n: ");scanf("%d",&n);
	gt=1;
	for(i=n;i>1;i=i-2)
	{
		gt=gt*i;
	}
	printf("%d",gt);
}
