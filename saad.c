#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int i,j,k;
  scanf("%d", &n);
  int matrix1[n][n];
  for (i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }
  int matrix2[n][n];
  for ( i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }
  int mult_matrix[n][n];
  for ( i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
    mult_matrix[i][j] = 0;
      for ( k = 0; k < n; k++) {
        mult_matrix[i][j] = mult_matrix[i][j] + matrix1[i][k] * matrix2[k][j];
      }
    }
  }
  for ( i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
      printf("%d\t", mult_matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
