#include<stdio.h>
#include<math.h>
void nhap(int &a,int &b)
{
	printf("nhap chi so dien cu: ");scanf("%d",&a);
	printf("nhap chi so dien moi: ");scanf("%d",&b);
}
void xuat(int &a,int &b)
{
	printf("\nchi so dien cu la:%d ",a);
	printf("\nchi so dien moi la:%d ",b);
}
void tinhtien(int &a,int &b,int soluong,float gia)
{
	soluong=b-a;
	if(soluong<=100)
	{
		gia=soluong*1418;
		printf("gia= %.2f",gia);
	}
	else if(soluong<=150)
	{
		gia=100*1418+(soluong-100)*1622;
		printf("gia= %.2f",gia);
	}
	else if(soluong<=200)
	{
		gia=100*1418+50*1622+(soluong-150)*2044;
		printf("gia= %.2f",gia);
	}
	else if(soluong<=300)
	{
		gia=100*1418+50*1622+50*2044+(soluong-200)*2210;
		printf("gia= %.2f",gia);
	}
	else if(soluong<=400)
	{
		gia=100*1418+50*1622+50*2044+100*2210+(soluong-300)*2361;
		printf("gia= %.2f",gia);
	} 
	else if(soluong>400)
	{
		gia=100*1418+50*1622+50*2044+100*2210+100*2361+(soluong-400)*2420;
		printf("gia= %.2f",gia);
	}
}
int main()
{
	int a,b,soluong;
	float gia=0;
	nhap(a,b);
	xuat(a,b);
	tinhtien(a,b,soluong,gia);
}
