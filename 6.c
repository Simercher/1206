#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main(void)
{
    char str[9999];
    scanf("%[^\n]", str);
    int i = 0;
    for(; i < strlen(str); i++)
    {
        if(isalpha(str[i]))
        {
            if(islower(str[i]))
            {
                printf("%c", toupper(str[i]));
            }else if(isupper(str[i]))
            {
                printf("%c", tolower(str[i]));
            }
        }else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}