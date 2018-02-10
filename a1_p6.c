/*
JTSK-320112
a1 p6.c
Sheikh Usman Ali
s.usmanali @jacobs-university.de
*/
#include <stdio.h>
int main(){
    unsigned int c;
    int i,s;
    unsigned int r;
    s=32768;
    scanf("%u",&c);
    printf("The binary representation is: ");
    for(i=0;i<16;i++)
    {
        r=(c&s)>>(15-i);
        printf("%u",r&1);
        s>>=1;
    }
    printf("\n");
    return 0;
}
