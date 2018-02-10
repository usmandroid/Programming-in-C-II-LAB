/*
JTSK-320112
a1 p3.c
Sheikh Usman Ali
s.usmanali @jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#define SUM(A,B,C) (A+B+C)
#define MIN(A,B,C) (A<B?A:B)<C?(A<B?A:B):C// ternary opeator evaluates smallest int
#define  MAX(A,B,C) (A>B?A:B)>C?(A>B?A:B):C//ternary opeator evaluates largest int
#define EXPR (((double)((SUM(A,B,C)) + (MAX(A,B,C))) / (MIN(A,B,C)))) //casting before division
int main()
{
    int A,B,C;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    printf("The value of the expression is: %.6lf\n",EXPR);//prints with 6 d.p fp precision
    return 0;
}
