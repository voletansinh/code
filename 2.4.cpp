#include<stdio.h>
void nhap(float &tg,float &lx,int &thg)
{
	printf("nhap tien gui: ");scanf("%f",&tg);
	printf("nhap lai xuat: ");scanf("%f",&lx);
	printf("nhap so thang: ");scanf("%d",&thg);
}
void xuat(float &tg,float &lx,int &thg)
{
	printf("\ntien gui la:%f ",tg);
	printf("\nlai xuat la:%f ",lx);
	printf("\nco %d thang ",thg);
}
void tinhtien(float &tg,float &lx,int &thg)
{
	for(int i=1;i<=thg;i++)
	{
		tg=tg+tg*lx/100;
	}
	printf("sau %d thang so tien nhan dc la %f",thg,tg);
}
int main()
{
	float tg,lx;
	int thg;
	nhap(tg,lx,thg);
	xuat(tg,lx,thg);
	tinhtien(tg,lx,thg);
}
