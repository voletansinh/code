#include<stdio.h>
#include<math.h>
int main()
{
	int tiencan,thg,tienmin;
	float lx;
	printf("nhap so tien can co: ");scanf("%d",&tiencan);
	printf("nhap so thang: ");scanf("%d",&thg);
	printf("nhap lai xuat hang thang: ");scanf("%f",&lx);
	tienmin=tiencan/pow(1+lx/100,thg);
	printf("so tien can gui la %d: ",tienmin);
}
