/*
JTSK-320112
a1 p5.c
Sheikh Usman Ali
s.usmanali @jacobs-university.de
*/
#include <stdio.h>
int main()
{
    unsigned int c;
    unsigned int x=0;
    scanf("%u",&c);
    printf("The backwards binary representation is: ");
    while(c){
        x<<=1;
        x|=c&1;
        c>>=1;
        printf("%u",x&1);
    }
    printf("\n");
    return 0;
}
