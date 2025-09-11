#include<stdio.h>
int main()
{
	char ten[100];
	int cu,moi,sl;
	float dg;
	printf("nhap ten khach hang: ");scanf("%s",&ten);
	printf("nhap chi so dien cu: ");scanf("%d",&cu);
	printf("nhap chi so dien moi: ");scanf("%d",&moi);
	printf("ten khach hang: %s",ten);
	sl=moi-cu;
	if(sl<=100)
	{
		dg=sl*1418;
		printf("\ntien dien la: %.2f",dg);
	}
	else if(sl<=150)
	{
		dg=100*1418+(sl-100)*1622;
		printf("\ntien dien la: %.2f",dg);
	}
	else if(sl<=200)
	{
		dg=100*1418+50*1622+(sl-150)*2044;
		printf("\ntien dien la: %.2f",dg);
	}
	else if(sl<=300)
	{
		dg=100*1418+50*1622+50*2044+(sl-200)*2210;
		printf("\ntien dien la: %.2f",dg);
	}
	else if(sl<=400)
	{
		dg=100*1418+50*1622+50*2044+100*2210+(sl-300)*2361;
		printf("\ntien dien la: %.2f",dg);
	}
	else if(sl>400)
	{
		dg=100*1418+50*1622+50*2044+100*2210+100*2361+(sl-400)*2420;
		printf("\ntien dien la: %.2f",dg);
	}
}
