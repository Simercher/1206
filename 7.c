#include <stdio.h>
#include <string.h>
// #include <Windows.h>

// char outbuf[1000];
int main(void)
{
    char str[100][100] = {0};
    int n = 0;
    int max = 0;
    while (gets(str[n]))
    {
        n++;
        if(max < strlen(str[n]))
        {
            max = strlen(str[n]);
        }
    }
    for(int i = 0; i < max; i++)
    {
        for(int j = n; j >= 0; j--)
        {
            if(str[j][i])
            {
                printf("%c", str[j][i]);
            }else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    

    return 0;
}