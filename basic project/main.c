#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    printf ("Howdy, neighbor! This is my first C program.\n");
    ch = getc(stdin);
    printf("The output is: %c\n", ch);
    return 0;
}
