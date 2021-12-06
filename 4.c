#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main(void)
{
    char str[9999];
    scanf("%[^\n]", str);
    char c, x;
    scanf(" %c %c", &c, &x);
    for(int i = 0; i < strlen(str); i++)
    {
        if(c == str[i])
        {
            printf("%c", x);
        }else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}