#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main(void)
{
    char str[9999];
    scanf("%s", str);
    char *tokenPtr;
    char c[2] = ",";
    scanf(" %s", c);
    tokenPtr = strtok(str, c);
    while (tokenPtr != NULL)
    {
        printf("%s", tokenPtr);
        tokenPtr = strtok(NULL, c);
        printf("\n");
    }

    return 0;
}