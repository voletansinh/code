#include<stdio.h>
int main()
{
	char ten[100];
	float trogl,dg;
	int ma,sl;
	printf("nhap ten mat hang: "); scanf("%s",&ten);
	printf("nhap trong luong: "); scanf("%f",&trogl);
	printf("nhap don gia: "); scanf("%f",&dg);
	printf("nhap ma chat luong: "); scanf("%d",&ma);
	printf("nhap so luong: "); scanf("%d",&sl);
	printf("\n\n\nten mat hang: %s",ten);
	printf("\ntrong luong: %.2f",trogl);
	printf("\ndon gia: %f",dg);
	printf("\nma chat luong: %d",ma);
	printf("\nso luong: %d",sl);
}
