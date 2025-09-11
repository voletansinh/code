#include<stdio.h>
int main()
{
	int gia,tien,tienthua,to10=0,to5=0,to1=0;
	printf("nhap gia cua san pham ");scanf("%d",&gia);
	printf("nhap so tien khach tra ");scanf("%d",&tien);
	tienthua=tien-gia;
	to10=tienthua/10;
	tienthua=tienthua%10;
	printf("\nso to 10 do phai dung la %d",to10);
	printf("\ntienthua %d",tienthua);
	to5=tienthua/5;
	tienthua=tienthua%5;
	printf("\nso to 5 do phai dung la %d",to5);
	printf("\ntienthua %d",tienthua);
	to1=tienthua/1;
	tienthua=tienthua%1;
	printf("\nso to 1 do phai dung la %d",to1);
	printf("\ntienthua %d",tienthua);
}
