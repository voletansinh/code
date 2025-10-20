#include <stdio.h>
#include <string.h>
#define max 5
struct khachhang
{
    char ten[50];
    int tinhtranggiaodich;
    int sotien;
};
typedef khachhang kh;
struct queue
{
    khachhang a[max];
    int dau;
    int cuoi;
    int dem;
};
typedef queue q;
void tao(queue &q)
{
    q.dau=0;
    q.cuoi=-1;
    q.dem=0;
}
int rong(queue &q)
{
    return q.dem=0;
}

int day(queue &q)
{
    return q.dem=max;
}
void vaohangdoi(queue &q, khachhang kh)
{
    if(day(q))
	{
        printf("day ko the them\n");
        return;
    }
    q.cuoi=(q.cuoi+1)%max;
    q.a[q.cuoi]=kh;
    q.dem=q.dem+1;
    printf("da them");
}
khachhang layhangdoi(queue &q)
{
    khachhang kh;
    if (rong(q))
	{
        printf("rong, ko co ai");
        return kh;
    }
    kh=q.a[q.dau];
    q.dau=(q.dau+1)%max;
    q.dem=q.dem-1;
    return kh;
}
kh nhap1kh()
{
	kh kh1;
    printf("nhap ten khach hang ");fflush(stdin);gets(kh1.ten);
    printf("loai giao dich: 1 gui tien,2 rut tien,3 chuyen khoan ");scanf("%d",&kh1.tinhtranggiaodich);
    printf("nhap so tien ");scanf("%d",&kh1.sotien);
    return kh1;
}
void nhapdskh(queue &q, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("nhap khach hang thu %d\n",i+1);
        kh kh1=nhap1kh();
        vaohangdoi(q, kh1);
    }
}
void xuatdskh(queue q)
{
    int i=q.dau;
    for(int j=0;j<q.dem;j++)
    {
        printf("ten: %s giao dich: %d so tien: %d\n",q.a[i].ten,q.a[i].tinhtranggiaodich,q.a[i].sotien);
        i=(i+1)%max;
    }
}
void phanloai(queue q) {
    int i=q.dau;
    for (int j=0;j<q.dem;j++) {
        kh kh1=q.a[i];
        switch (kh1.tinhtranggiaodich) {
            case 1:
                printf("khach hang %s thuc hien gui tien (%d)\n",kh1.ten,kh1.sotien);
                break;
            case 2:
                printf("khach hang %s thuc hien rut tien (%d)\n",kh1.ten,kh1.sotien);
                break;
            case 3:
                printf("khach hang %s thuc hien chuyen khoan (%d)\n",kh1.ten,kh1.sotien);
                break;
        }
        i=(i+1) %max;
    }
}
int main()
{
    queue q;
    tao(q);
    int n;
    printf("nhap so luong khach hang ");scanf("%d", &n);
    nhapdskh(q, n);
    xuatdskh(q);
    phanloai(q);
}
