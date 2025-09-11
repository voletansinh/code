#include<stdio.h>
int main()
{
	float diem;
	printf("nhap diem thang diem 10: ");scanf("%f",&diem);
	if(diem>=9)
	{
		printf("\ndiem la: 4, A+");
	}
	else if(diem>=8&&diem<9)
	{
		printf("\ndiem la: 3.5, A");
	}
	else if(diem>=7&&diem<8)
	{
		printf("\ndiem la: 3, B+");
	}
	else if(diem>=6&&diem<7)
	{
		printf("\ndiem la: 2.5, B");
	}
	else if(diem>=5&&diem<6)
	{
		printf("\ndiem la: 2, C");
	}
	else if(diem>=4&&diem<5)
	{
		printf("\ndiem la: 1.5, D");
	}
	else if(diem<4)
	{
		printf("\ndiem la: 1, F");
	}
}
