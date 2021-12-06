#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int flag = 1, flag2 = 1;
    for (int i = 3; i < n / 2 + 1; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            int x = n - i;
            for (int k = 2; k < x; k++)
            {
                if (x % k == 0)
                {
                    flag2 = 0;
                    break;
                }
            }
            if(flag == 1 && flag2 == 1)
            {
                printf("%d+%d\n", i, x);
            }
        }
        flag = 1;
        flag2 = 1;
    }
    if(n == 4)
    {
        printf("2+2");
    }

    return 0;
}