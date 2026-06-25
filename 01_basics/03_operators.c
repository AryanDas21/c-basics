#include <stdio.h>

int main () {

    //Unary Operators
    int a = 10;
    printf("Unary Pre-Increment: %d\n", ++a);    //Prefix updates its value first, then uses that value to execute an expression

    int b = 10;
    printf("Unary Post-Increment (before): %d\n", b++);    //Postfix uses its current/old value to execute the expression first, then updates its value permanently
    printf("Unary Post-Increment (after): %d\n", b);

    int c = 10;
    printf("Unary Pre-Decrement: %d\n", --c);

    int d = 10;
    printf("Unary Post-Decrement (before): %d\n", d--);
    printf("Unary Post-Decrement (after): %d\n", d);

    int e = 10;
    printf("Unary Plus: %d\n", +e);

    printf("Unary Minus: %d\n", -e);

    printf("Logical NOT: %d\n", !e);    //Every constant value is taken as True (1)

    printf("Bitwise NOT / Tilde: %d\n", ~e);    //~x = -(x+1)  (except for unsigned datatypes)

    printf("Address-of: %d\n", &e);    //This address changes every execution due to ASLR (OS memory randomization for security) and dynamic stack allocation

    printf("Sizeof: %d bytes\n", sizeof(e));    //Returns size of variable in bytes

    printf("(type): %f\n", (float)e);

    return 0;
}
