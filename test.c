#include <stdio.h>
#include <string.h>

#define MAX 101

void Print_a_line(int, int , char(*)[MAX]);

int main()
{
    int column, count, max_len = 0;
    char sentences[MAX][MAX] = {0};

    /* Read in and find the max length. */
    for(count = 0; gets(sentences[count]); count++)
        if(strlen(sentences[count]) > max_len)
            max_len = strlen(sentences[count]);

    for(column = 0; column < max_len; column++)
        Print_a_line(column, count, sentences);

    return 0;
}

void Print_a_line(int column, int count, char sentences[][MAX])
{
    int row;
    for(row = count-1; row >= 0; row--)
        if(sentences[row][column])
            printf("%c", sentences[row][column]);
        else{
            /* If nothing, print whitespace */
            if(row != 0){
                // The 0th row don't need the white space.
                printf(" ");
            }
        }
    printf("\n");
}