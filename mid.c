/*
 JTSK-320112
 a1_p3.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#define MAX(a,b,c) (a>b?a:b)>c?(a>b?a:b):c
#define MIN(a,b,c) (a<b?a:b)<c?(a<b?a:b):c
#define MID_RANGE ((MIN(a,b,c))+(MAX(a,b,c)))/2.0
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("The mid-range is: %.6lf\n",MID_RANGE);
    return 0;
}
