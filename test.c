#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf(�enter value of a:�);
scanf(�%d�,&a);
printf(�enter value of b:�);
scanf(�%d�,&b);
printf(�enter value of c:�);
scanf(�%d�,&c);
printf(�n values of variables a,b&c before swapping:nt%d %d %d�,a,b,c);
d=a;
a=b;
b=c;
c=d;
printf(�n values of variables a,b&c after swapping:nt%d %d %d�,a,b,c);
getch();
}
