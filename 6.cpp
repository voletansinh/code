#include<stdio.h>
int main()
{
	float gui,lx;
	int i,thg;
	printf("nhap so tien gui: ");scanf("%f",&gui);
	printf("nhap so lai xuat: ");scanf("%f",&lx);
	printf("nhap so thang: ");scanf("%d",&thg);
	for(i=1;i<=thg;i++)
	{
		gui=gui+gui*(lx/100);
	}
	printf("so tien nhan dc sau %d thang la: %.2f",thg,gui);
}
