#include <stdio.h>
#include <string.h>
#define max 100
struct sinhvien
{
    char msv[20];
    char ten[50];
    int tuoi;
};
typedef sinhvien sv;
struct stack
{
    sinhvien data[max];
    int top;
};
typedef stack s;
void tao(stack &s)
{
    s.top=-1;
}
int rong(stack &s)
{
    return s.top==-1;
}

int day(stack &s)
{
    return s.top==max-1;
}
void push(stack &s, sinhvien sv)
{
    if(day(s))
	{
        printf("day ko the them\n");
        return;
    }
    s.top=s.top+1;
    s.data[s.top]=sv;
}
sinhvien pop(stack &s)
{
    sinhvien sv;
    if (rong(s))
	{
        printf("rong ko the lay ra");
        return sv;
    }
    sv=s.data[s.top];
    s.top=s.top-1;
    return sv;
}
sv nhap1sv()
{
	sv sv1;
    printf("nhap ma sinh vien ");
    scanf("%s",sv1.msv);
    printf("nhap ten sinh vien ");fflush(stdin);gets(sv1.ten);
    printf("nhap tuoi cua sinh vien ");scanf("%d",&sv1.tuoi);
    return sv1;
}
void nhapdssv(s &st, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("nhap sinh vien thu %d\n",i+1);
        sv sv1=nhap1sv();
        push(st, sv1);
    }
}
void xuatdssv(s st)
{
	for (int i=st.top;i>=0;i--)
	{
        printf("msv: %s ten sinh vien: %s tuoi sinh vien: %d\n", st.data[i].msv, st.data[i].ten, st.data[i].tuoi);
    }
}
int main() {
    s st;
    tao(st);
    int n;
    printf("nhap so luong sinh vien: ");scanf("%d", &n);
    nhapdssv(st, n);
    xuatdssv(st);
    sv svpop=pop(st);
    printf("da lay ra msv: %s ten sinh vien: %s tuoi sinh vien: %d\n",svpop.msv,svpop.ten,svpop.tuoi);
    xuatdssv(st);
}
