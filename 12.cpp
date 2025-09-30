#include <stdio.h>
#include <string.h>

int t;
int a[8];
int s[7];
int sum = 0, x;
int u, v, w;
int ch;

void si(int k, int n)
{
    for(int i = 0; i <= 9; i++)
    {
        s[k] = i;
        sum += i;
        if(k == n)
        {
            ch = 1;
            for(int j = 1; j <= 3; j++)
            {
                if(s[j] != s[6 - j + 1])
                {
                    ch = 0;
                    break;
                }
            }
            if(ch)
            {
                a[3]++;
                x = sum;
                if(x % 10 == 0)
                {
                    a[2]++;
                    ch = 1;
                    for(int j = 1; j <= 6; j++)
                    {
                        if(s[j] == 0)
                        {
                            ch = 0;
                            break;
                        }
                    }
                    if(ch) a[1]++;
                }
            }
        }
        else si(k + 1, n);
        sum -= i;
    }
}

int main()
{
    scanf("%d", &t);
    memset(a, 0, sizeof(a));
    si(1, 6);
    while(t--)
    {
        scanf("%d %d %d", &u, &v, &w);
        if(u > a[1])
        {
            printf("NO\n");
            continue;
        }
        if(a[2] - a[1] < v)
        {
            printf("NO\n");
            continue;
        }
        if(a[3] - a[2] - a[1] < w)
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
    return 0;
}

