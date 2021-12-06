#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main(void)
{
    char str[9999];
    scanf("%[^\n]", str);
    for(int i = 0; i < strlen(str); i++)
    {
        if(isalpha(str[i]))
        {
            if(isupper(str[i]))
            {
                printf("%c", tolower(str[i]));
            }else
            {
                printf("%c", str[i]);
            }
        }else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}