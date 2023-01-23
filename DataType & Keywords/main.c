/* Print out Characters */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2;
    c1 = 'A';
    c2 = 'a';
    printf("Convert the value of c1 to character: %c\n", c1);
    printf("Convert the value of c2 to character: %c\n", c2);

    // Converting numeric value back to characters
    char num1, num2;

    num1 = 65;
    num2 = 97;

    printf("Convert the value of num1 to character: %c\n", num1);
    printf("Convert the value of num2 to character: %c\n", num2);
    return 0;
}
