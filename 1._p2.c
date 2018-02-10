/*
JTSK-320112
a1 p2.c
Sheikh Usman Ali
s.usmanali @jacobs-university.de
*/
#include <stdio.h>
#define TLSF(C) ( (C & 4)>0 ? 1: 0) //Conditional ternary binary test. *c&4 in  binary is 100.
int main()
{
    unsigned char c;
    scanf("%c", &c);

    printf("The decimal representation is: %d\n",(unsigned int) c);
    printf("The third least significant bit is: %d\n", TLSF(c));

    return 0;
}
