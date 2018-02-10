/*
 JTSK-320112
 a1_p4.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE
int main(){
    int i,n,sum;
    int* vec1;
    int* vec2;
    scanf("%d",&n);
    vec1 = (int*)malloc(sizeof(int)*n);
    vec2 = (int*)malloc(sizeof(int)*n);
    if(vec1==NULL)
        exit(1);
    if(vec2==NULL)
        exit(1);
    for(i=0;i<n;i++)
        scanf("%d",&vec1[i]);
    for(i=0;i<n;i++)
        scanf("%d",&vec2[i]);
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",vec1[i]*vec2[i]);
#endif
    sum = 0;
    for(i=0;i<n;i++)
        sum += vec1[i]*vec2[i];
    printf("The scalar product is: %d\n",sum);
    return 0;
}
