#include<stdio.h>
int main()
{
	int thg,nam;
	printf("nhap thang: ");scanf("%d",&thg);
	printf("nhap nam: ");scanf("%d",&nam);
	switch(thg)
	{
		case 1:
			printf("co 31 ngay ");
			break;
		case 2:
			if((nam%4==0&&nam%100!=0)||nam%400==0)
				printf("co 29 ngay");
			else printf("co 28 ngay");
			break;
		case 3:
			printf("co 31 ngay ");
			break;
		case 4:
			printf("co 30 ngay ");
			break;
		case 5:
			printf("co 31 ngay ");
			break;
		case 6:
			printf("co 30 ngay ");
			break;
		case 7:
			printf("co 31 ngay ");
			break;
		case 8:
			printf("co 31 ngay ");
			break;
		case 9:
			printf("co 30 ngay ");
			break;
		case 10:
			printf("co 31 ngay ");
			break;
		case 11:
			printf("co 30 ngay ");
			break;
		case 12:
			printf("co 31 ngay ");
			break;
	}
}
