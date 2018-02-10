/*
JTSK-320112
a1 p4.c
Sheikh Usman Ali
s.usmanali @jacobs-university.de
*/

#include<stdio.h>
#define INTERMEDIATE// comment line to print ONLY the result
int main()
         {
            int n;
            scanf("%d",&n);
            int m1[n][n];
            int m2[n][n];
            int m3[n][n];
            int i,j,k;
            for (i=0;i<n;i++)
                {
                for(j=0;j<n;j++)
                    {
                    scanf("%d",&m1[i][j]);
                    }
                }

            for (i=0;i<n;i++)
                {
                for(j=0;j<n;j++)
                    {
                    scanf("%d",&m2[i][j]);
                    }
                }
    #ifdef INTERMEDIATE//for printing both steps and result
    printf("The intermediate product values are:\n");
    for(i=0;i<n;i++)
                 for (j=0;j<n;j++)
                {
                m3[i][j]= 0;
                    for (k=0;k<n;k++)
                            printf("%d\n",m3[i][j]+ m1[i][k] * m2[k][j]);
                }
      for(i=0;i<n;i++)
                 for (j=0;j<n;j++)
                {
                m3[i][j]= 0;
                    for (k=0;k<n;k++)
                            m3[i][j]+= m1[i][k] * m2[k][j];
                }
            getchar();
            printf("The product of the matrices is:\n");
            for (i=0;i<n;i++)
            {
                   for (j=0;j<n;j++)
            {
                printf("%d ", m3[i][j]);
            }
             printf("\n");
            }

    #endif
    #ifndef INTERMEDIATE//for printing only the result
            for(i=0;i<n;i++)
                 for (j=0;j<n;j++)
                {
                m3[i][j]= 0;
                    for (k=0;k<n;k++)
                            m3[i][j]+= m1[i][k] * m2[k][j];
                }
            getchar();
            printf("The product of the matrices is:\n");
            for (i=0;i<n;i++)
            {
                   for (j=0;j<n;j++)
            {
                printf("%d ", m3[i][j]);
            }
             printf("\n");
            }
    #endif
            return 0;
         }

