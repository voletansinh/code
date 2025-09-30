#include <stdio.h>
#include <string.h>

int isStrongPassword(char *pw)
{
    int dodai = strlen(pw);
    if (dodai < 8) return 0;

    int chuhoa = 0, chuthuong = 0, chuso = 0;
    for (int i = 0; i < dodai; i++)
    {
        if (pw[i] >= 65 && pw[i] <= 90) chuhoa = 1;      // ch? hoa
        if (pw[i] >= 97 && pw[i] <= 122) chuthuong = 1;  // ch? thu?ng
        if (pw[i] >= 48 && pw[i] <= 57) chuso = 1;       // s?
    }
    return (chuhoa && chuthuong && chuso);
}

int main()
{
    char pw[50];
    printf("Nhap mat khau: ");
    scanf("%s", pw);
    if (isStrongPassword(pw))
        printf("Mat khau manh!");
    else
        printf("Mat khau yeu!");
    return 0;
}

