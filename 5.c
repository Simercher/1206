#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main(void)
{
    char c;
    scanf("%c", &c);
    if(isupper(c))
    {
        printf("uppercase\n");
    }else if(islower(c))
    {
        printf("lowercase\n");
    }else
    {
        printf("special character\n");
    }

    return 0;
}