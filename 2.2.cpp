#include<stdio.h>
#include<math.h>
void nhap(float &a)
{
	printf("nhap diem a ");scanf("%f",&a);
}
void xuat(float &a)
{
	printf("\nthang diem 10 la:%f ",a);
}
void quydoi(float &a)
{
	if(a>=9)
	{
		printf("\n4.0  A+");
	}
	else if(a>8)
	{
		printf("\n3.5  A");
	}
	else if(a>7)
	{
		printf("\n3  B+");
	}
	else if(a>6)
	{
		printf("\n2.5  B");
	}
	else if(a>5)
	{
		printf("\n2  C");
	}
	else if(a>4)
	{
		printf("\n1.5  D");
	}
	else printf("\n1  f");
}
int main()
{
	float a;
	nhap(a);
	xuat(a);
	quydoi(a);
}
