#include <stdio.h>
#include <string.h>

void daoNguocChuoi(char *pw)
{
    int left = 0;
    int right = strlen(pw) - 1;
    while (left < right)
    {
        char temp = pw[left];
        pw[left] = pw[right];
        pw[right] = temp;
        left++;
        right--;
    }
}

int main()
{
    char pw[] = "Hellllllooooo";
    daoNguocChuoi(pw);
    printf("Chuoi dao nguoc la: %s", pw);
    return 0;
}

