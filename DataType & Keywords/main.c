/* Print out Characters */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DATA TYPE => char*/
    char c1, c2;
    c1 = 'A';
    c2 = 'a';
    printf("DISPLAYING DATA TYPE => char \n\n");
    printf("Convert the value of c1 to character: %c\n", c1);
    printf("Convert the value of c2 to character: %c\n\n", c2);

    // Converting numeric value back to characters
    char num1, num2;

    num1 = 65;
    num2 = 97;

    printf("Convert the value of num1 to character: %c\n", num1);
    printf("Convert the value of num2 to character: %c\n\n", num2);

    /* DATA TYPE => int*/
    printf("DISPLAYING DATA TYPE => int\n\n");
    //Declaration
    int ch3;
    int ch4;

    // Assigning The Value
    ch3 = 'B';
    ch4 = 'b';

    printf("The numeric value of ch3 is: %d\n", ch3);
    printf("The numeric value of ch4 is: %d\n", ch4);
    return 0;
}
