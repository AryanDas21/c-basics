#include <stdio.h>

//Following values are the range limits for each datatype in a 16-bit machine
int main() { 
    int a = -32768;     //signed int by default
    printf("Signed Integer : %d\n", a);

    unsigned int b = 65535;    //unsigned is necessary
    printf("Unsigned Integer : %u\n", b);

    short int c = -128;    //int is not necessary, can just be written as short
    printf("Signed Short Integer : %hd\n", c);

    unsigned short int d = 255;
    printf("Unsigned Short Integer : %hu\n", d);

    long int e = -2147483648;
    printf("Signed Long Integer : %ld\n", e);

    unsigned long int f = 4294967295;
    printf("Unsigned Long Integer : %lu\n", f);

    float g = 1.000001f;    //7 digit precision
    printf("Float : %.6f\n", g);

    double h = 1.00000000000001;    //15 digit precision
    printf("Double : %.14lf\n", h);

    long double i = 1.0000000000000000001L;    //20 digit precision
    printf("Long Double : %.19Lf\n", i);    //gives wrong value because of the Windows display tool compatibility 

    char ch = 'j';    //stores value in integer according to ASCII value
    printf("Char : %c\n", ch);

    return 0;
}
