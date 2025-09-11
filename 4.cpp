#include<stdio.h>
int main()
{
	char ten[100];
	float toan,van,tin,tb;
	printf("nhap ten HS: "); scanf("%s",&ten);
	printf("nhap diem toan: "); scanf("%f",&toan);
	printf("nhap diem van: "); scanf("%f",&van);
	printf("nhap diem tin: "); scanf("%f",&tin);
	printf("\n\n\nten HS: %s",ten);
	tb=(toan+van+tin)/3;
	printf("\ndiem tb: %f",tb);
	if(tb<5)
	{
		printf("\nHS yeu");
	}
	else if(tb>=5&&tb<7)
	{
		printf("\nHS TB");
	}
	else if(tb>=7&&tb<8)
	{
		printf("\nHS kha");
	}
	else if(tb>=8)
	{
		printf("\nHS gioi");
	}
}
