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

    //Binary Operators

    int f = 10, g = 5;

    //Arithmetic Operators

    printf("Add: %d\n", f + g);
    printf("Subtract: %d\n", f - g);
    printf("Multiply: %d\n", f * g);
    printf("Divide: %d\n", f / g);
    printf("Modulo: %d\n", f % g);

    //Relational Operators

    printf("Equal-to: %d\n", f == g);
    printf("Not Equal-to: %d\n", f != g);
    printf("Greater-than: %d\n", f > g);
    printf("Lesser-than: %d\n", f < g);
    printf("Greater-than Equal-to: %d\n", f >= g);
    printf("Lesser-than Equal-to: %d\n", f <= g);

    //Logical Operators

    printf("Logical AND: %d\n", f && g);
    printf("Logical OR: %d\n", f || g);

    //Bitwise Operators

    printf("Bitwise AND: %d\n", f & g);
    printf("Bitwise OR: %d\n", f | g);
    printf("Bitwise XOR: %d\n", f ^ g);
    printf("Left Shift: %d\n", f << g);
    printf("Right Shift: %d\n", f >> g);

    //Assignment Operators

    int h, i = 10, j = 10, k = 10, l = 10, m = 10, n = 10, o = 10, p = 10;

    h = g;
    printf("Simple Assign: %d\n", h);
    i += g;
    printf("Add and Assign: %d\n", i);
    j -= g;
    printf("Subtract and Assign: %d\n", j);
    k *= g;
    printf("Multiply and Assign: %d\n", k);
    l /= 5;
    printf("Divide and Assign: %d\n", l);
    m %= g;
    printf("Modulo and Assign: %d\n", m);
    n ^= g;
    printf("Bitwise XOR and Assign: %d\n", n);
    o <<= g;
    printf("Left Shift and Assign: %d\n", o);
    p >>= g;
    printf("Right Shift and Assign: %d\n", p);

    return 0;
}
