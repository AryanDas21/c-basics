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
    printf("Unary Minus: %d\n", -e);    //Temporarily changes the value to negative
    printf("Logical NOT: %d\n", !e);    //Every constant value is taken as True (1)
    printf("Bitwise NOT / Tilde: %d\n", ~e);    //~x = -(x+1)  (except for unsigned datatypes)
    printf("Address-of: %p\n", &e);    //This address changes every execution due to ASLR (OS memory randomization for security) and dynamic stack allocation
    printf("Sizeof: %zu bytes\n", sizeof(e));
    printf("(type): %f\n", (float)e);

    //Binary Operators

    int f = 10, g = 5;

    //Arithmetic Operators

    printf("Addition: %d\n", f + g);
    printf("Subtraction: %d\n", f - g);
    printf("Multiplication: %d\n", f * g);
    printf("Division: %d\n", f / g);
    printf("Modulo: %d\n", f % g);

    //Relational Operators (always returns 0 (false) or 1 (true))

    printf("Equal-to: %d\n", f == g);
    printf("Not Equal-to: %d\n", f != g);
    printf("Greater-than: %d\n", f > g);
    printf("Less-than: %d\n", f < g);
    printf("Greater-than Equal-to: %d\n", f >= g);
    printf("Less-than Equal-to: %d\n", f <= g);

    //Logical Operators

    printf("Logical AND: %d\n", f && g);    //Does not execute the second operand if the first operand is 0
    printf("Logical OR: %d\n", f || g);    //Does not execute the second operand if the first operand is 1

    //Bitwise Operators

    printf("Bitwise AND: %d\n", f & g);    //Converts the values to binary first, then compares individual bits (0s and 1s)
    printf("Bitwise OR: %d\n", f | g);
    printf("Bitwise XOR: %d\n", f ^ g);
    printf("Left Shift: %d\n", f << g);    //First operand gets multiplied by 2^(second operand)
    printf("Right Shift: %d\n", f >> g);    //First operand gets divided by 2^(second operand)

    //Assignment Operators

    int h, i = 10, j = 10, k = 10, l = 10, m = 10, n = 10, o = 10, p = 10, q =10, r = 10;

    h = g;
    printf("Simple Assign: %d\n", h);
    i += g;
    printf("Add and Assign: %d\n", i);
    j -= g;
    printf("Subtract and Assign: %d\n", j);
    k *= g;
    printf("Multiply and Assign: %d\n", k);
    l /= g;
    printf("Divide and Assign: %d\n", l);
    m %= g;
    printf("Modulo and Assign: %d\n", m);
    n &= g;
    printf("Bitwise AND and Assign: %d\n", n);
    o |= g;
    printf("Bitwise OR and Assign: %d\n", o);
    p ^= g;
    printf("Bitwise XOR and Assign: %d\n", p);
    q <<= g;
    printf("Left Shift and Assign: %d\n", q);
    r >>= g;
    printf("Right Shift and Assign: %d\n", r);

    //Comma Operator

    int s = (10, 20, 30);    //It executes the left side first, discards the result of that left expression and then moves to the right side
    printf("Comma: %d\n", s);

    //Ternary Operator

    int t = (f > g) ? f : g;    //Evaluates condition: returns f (expression 1) if true, or g (expression 2) if false
    printf("Ternary (Conditional): %d\n", t);

    return 0;
}
