#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Write a C function that can perform a multiplication of two integers and return the
calculated result.*/

int mulityNum(int a, int b) {
    int result;
    result = a * b;
    return result;
}
int main()
{

    //Result is
    int result = mulityNum(3, 5);
    printf("The result is: %d\n", result);
    /* Given two statements, x = 3; and y = 5 + x;, how can you build a statement
        block with the two statements? */
    // int y;
    // int x = 3; // Deaclartion
    // y = 5 + x;

    // printf("The value is: %d\n", y);
    return 0;
}
