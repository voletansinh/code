#include<stdio.h>
void nhap(int &n)
{
	printf("nhap n: ");scanf("%d",&n);
}
void xuat(int &n)
{
	printf("n la %d",n);
}
void giaithua(int &n)
{
	int gt=1;
	for(int i=n;i>1;i=i-2)
	{
		gt=gt*i;
	}
	printf("= %d",gt);
}
int main()
{
	int n;
	nhap(n);
	xuat(n);
	giaithua(n);
}
