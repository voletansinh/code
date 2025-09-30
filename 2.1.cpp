#include<stdio.h>
#include<math.h>
void nhap(float &a,float &b,float &c)
{
	printf("nhap canh a ");scanf("%f",&a);
	printf("\nnhap canh b ");scanf("%f",&b);
	printf("\nnhap canh c ");scanf("%f",&c);
}
void xuat(float &a,float &b,float &c)
{
	printf("\ncanh a:%f ",a);
	printf("\ncanh b:%f ",b);
	printf("\ncanh c:%f ",c);
}
int ktra(float &a,float &b,float &c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b&&b==c)
		{
			printf("\nla tam giac deu");
			return 0;
		}
		if(pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(b,2)+pow(c,2)==pow(a,2))
		{
			printf("\nla tam giac vuong");
			return 0;
		}
		if(a==b||b==c||a==c)
		{
			printf("\nla tam giac can");
			return 0;
		}
		if((pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(b,2)+pow(c,2)==pow(a,2))&&(a==b||b==c||a==c))
		printf("\nla tam giac vuong can");
		else printf("\nla tam giac thuong");
	}
	
	
}
int dientich(float &a,float &b,float &c,float p,float s)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\ndien tich hinh tam giac la %f",s);
		return 0;
	}
	
	if(a+b!=c&&a+c!=b&&b+c!=a)
	{
		printf("\nko phai la tam giac");
	}
}
int main()
{
	float a,b,c,p,s;
	nhap(a,b,c);
	xuat(a,b,c);
	ktra(a,b,c);
	dientich(a,b,c,p,s);
}
