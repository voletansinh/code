#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	printf("nhap n: ");scanf("%d",&n);
	if(n<2)
	{
		printf("nhap so lon hon 2");
	}
	if(n>=2)
	{
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)
			{
				printf("%d ko la so nguyen to",n); return 0;
			}
			printf("%d la so nguyen to",n);
	}
}

