#include<stdio.h>
void nhap(float &tg,float &lx,float &tn)
{
	printf("nhap tien gui: ");scanf("%f",&tg);
	printf("nhap lai xuat: ");scanf("%f",&lx);
	printf("nhap so tien nhan: ");scanf("%f",&tn);
}
void xuat(float &tg,float &lx,float &tn)
{
	printf("\ntien gui la:%f ",tg);
	printf("\nlai xuat la:%f ",lx);
	printf("\ntien nhan la:%f ",tn);
}
void tinhtien(float &tg,float &lx,float &tn)
{
	int thg=0;
	for(thg=0;tg<tn;thg++)
	{
		tg=tg+tg*(lx/100);
	}
	printf("so tien nhan dc sau %d thang",thg);
}
int main()
{
	float tg,lx,tn;
	nhap(tg,lx,tn);
	xuat(tg,lx,tn);
	tinhtien(tg,lx,tn);
}
