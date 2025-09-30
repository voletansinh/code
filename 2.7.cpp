#include<stdio.h>
void nhap(int &n,int &m)
{
	printf("nhap n: ");scanf("%d",&n);
	printf("nhap m: ");scanf("%d",&m);
}
void xuat(int &n,int &m)
{
	printf("n la %d m la %d",n,m);
}
void tinh(int &n,int &m)
{
	int tg=0;
	tg=m-n+1;
	printf("\n co %d so",tg);
}
int main()
{
	int n,m;
	nhap(n,m);
	xuat(n,m);
	tinh(n,m);
}
