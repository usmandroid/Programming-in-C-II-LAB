/*
JTSK-320112
a1 p1.c
Sheikh Usman Ali
s.usmanali @jacobs-university.de
*/
// Simple swap using temp variable.
#include <stdio.h>
#define SWAP(A,B,C, TYPE)  {TYPE temp;temp=(B) ; (B)=(A) ; (A)=(C); (C)=temp;}
int main()
{
    int x,y,z;
    double p,q,r;
        scanf ("%i", &x);
        scanf ("%i", &y);
        scanf ("%i", &z);
        scanf ("%lf", &p);
        scanf ("%lf", &q);
        scanf ("%lf", &r);
        getchar();
        printf("After the permutation:\n");
        SWAP(x,y,z,int);
        printf("%d\n%d\n%d\n", x, y, z);
        SWAP(p,q, r,double);
        printf("%.5lf\n%.5lf\n%.5lf\n", p, q, r);




    return 0;
}
