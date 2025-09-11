#include<stdio.h>
int main()
{
	int gia,tien,tienthua,to10=0,to5=0,to1=0;
	printf("nhap gia cua san pham ");scanf("%d",&gia);
	printf("nhap so tien khach tra ");scanf("%d",&tien);
	tienthua=tien-gia;
	for(int i=tienthua;i>=10;i=i-10)
	{
		to10=to10+1;
	}
	printf("\nso to 10 do phai dung la %d",to10);
	tienthua=tienthua-10*to10;
	printf("\ntienthua %d",tienthua);
	for(int i=tienthua;i>=5;i=i-5)
	{
		to5=to5+1;
	}
	printf("\nso to 5 do phai dung la %d",to5);
	tienthua=tienthua-5*to5;
	printf("\ntienthua %d",tienthua);
	for(int i=tienthua;i>=1;i=i-1)
	{
		to1=to1+1;
	}
	printf("\nso to 1 do phai dung la %d",to1);
}
