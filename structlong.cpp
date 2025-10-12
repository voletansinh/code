#include<stdio.h>
#include<math.h>

struct Sinhvien
{
    char ten[100];
    char msv[20];
    struct ngaysinh
    {
        int ngay, thang, nam;
    } ns;
};
typedef struct Sinhvien sv;
void nhap(sv &sv)
{
    printf("nhap ma sinh vien "); scanf("%s", sv.msv);
    printf("nhap ten sinh vien "); fflush(stdin); gets(sv.ten);
    printf("nhap ngay sinh cua sinh vien "); scanf("%d",&sv.ns.ngay);
    printf("nhap thang sinh cua sinh vien "); scanf("%d",&sv.ns.thang);
    printf("nhap nam sinh cua sinh vien "); scanf("%d",&sv.ns.nam);
}
void xuat(sv sv)
{
    printf("ma sinh vien la "); puts(sv.msv);
    printf("ten sinh vien la "); puts(sv.ten);
    printf("ngay sinh: %d/%d/%d\n", sv.ns.ngay, sv.ns.thang, sv.ns.nam);
}
int ktrasn(sv ds[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(ds[i].ns.thang==1||ds[i].ns.thang==3||ds[i].ns.thang==5||ds[i].ns.thang==7||ds[i].ns.thang==8||ds[i].ns.thang==10||ds[i].ns.thang==12)
        {
            if(ds[i].ns.ngay>31)
                printf("stt %d co ngay sinh ko dung\n",i+1);
            return 0;
        }
        else if(ds[i].ns.thang==4||ds[i].ns.thang==6||ds[i].ns.thang==9||ds[i].ns.thang==11)
        {
            if(ds[i].ns.ngay>30)
                printf("stt %d co ngay sinh ko dung\n",i+1);
            return 0;
        }
        else if(ds[i].ns.thang==2)
        {
            if((ds[i].ns.nam%4==0&&ds[i].ns.nam%100!=0)||ds[i].ns.nam%400==0)
            {
                if(ds[i].ns.ngay>29)
                    printf("stt %d co ngay sinh ko dung\n",i+1);
                return 0;
            }
            else
            {
                if(ds[i].ns.ngay>28)
                    printf("stt %d co ngay sinh ko dung\n",i+1);
                return 0;
            }
        }
    }
    return 1;
}
void nhapdssv(sv ds[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("nhap sinh vien thu %d\n", i+1);
        nhap(ds[i]);
    }
}
void xuatdssv(sv ds[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("sinh vien thu %d:\n", i+1);
        xuat(ds[i]);
    }
}
int main()
{
    int n;
    printf("nhap so luong sinh vien "); scanf("%d",&n);
    sv ds[n];
    nhapdssv(ds,n);
    if(ktrasn(ds,n)==0)
    {
        printf("loi");
    }
    else xuatdssv(ds,n);
}

