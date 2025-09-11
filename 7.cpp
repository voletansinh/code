#include<stdio.h>
int main()
{
	float gui,lx,nhan;
	int thg;
	printf("nhap so tien gui: ");scanf("%f",&gui);
	printf("nhap so lai xuat: ");scanf("%f",&lx);
	printf("nhap so tien nhan: ");scanf("%f",&nhan);
	for(thg=0;gui<nhan;thg++)
	{
		gui=gui+gui*(lx/100);
	}
	printf("so tien nhan dc sau %d thang",thg);
}
