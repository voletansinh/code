#include<stdio.h>
#include<math.h>
struct Sinhvien
{
	char ten[100];
	char msv[20];
	int tuoi;
	float dtb;
};
typedef struct Sinhvien sv;
void nhap(Sinhvien &sv)
{
	printf("nhap ma sinh vien ");scanf("%s",&sv.msv);
	printf("nhap ten sinh vien ");fflush(stdin);gets(sv.ten);
	printf("nhap tuoi cua sinh vien ");scanf("%d",&sv.tuoi);
	printf("nhap diem trung binh cua sinh vien ");scanf("%f",&sv.dtb);
}
void xuat(Sinhvien sv)
{
	printf("ma sinh vien la ");
	puts(sv.msv);
	printf("ten sinh vien la ");
	puts(sv.ten);
	printf("tuoi cua sinh vien la %d\n",sv.tuoi);
	printf("diem trung binh cua sinh vien la %.2f\n",sv.dtb);
}
void nhapdssv(sv ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap sinh vien thu %d\n",i+1);nhap(ds[i]);
	}
}
void xuatdssv(sv ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("sinh vien thu %d\n: ",i);xuat(ds[i]);
	}
}
void maxtb(sv ds[],int n)
{
	int stt=1;
	int i=0;
	float max=ds[0].dtb;
	for(i=0;i<n;i++)
	{
		if(ds[i].dtb>max)
		{
			max=ds[i].dtb;
			stt=i+1;
		}
	}
	printf("stt %d diem tb lon nhat la %.2f\n: ",stt,max);
}
void sx(sv ds[],int n)
{
	sv tg;
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(ds[i].dtb<ds[i+1].dtb)
			{
				tg=ds[i];
				ds[i]=ds[i+1];
				ds[i+1]=tg;
			}
		}
	}
}
int main()
{
	int n;
	printf("nhap so luong sinh vien ");scanf("%d",&n);
	sv ds[n];
	nhapdssv(ds,n);
	//xuatdssv(ds,n);
	maxtb(ds,n);
//	sx(ds,n);
//	xuatdssv(ds,n);
}
