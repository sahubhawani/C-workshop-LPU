//Write a c program to perform the addition of two matrices

#include <stdio.h>
 
int main()
{
  int m, n;
 
  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d", &m, &n);

  int first[3][3], second[3][3], sum[3][3];

  printf("Enter the elements of first matrix\n");
 
  for (int c = 0; c < m; c++)
    for (int d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter the elements of second matrix\n");
 
  for (int c = 0; c < m; c++)
    for (int d = 0 ; d < n; d++)
      scanf("%d", &second[c][d]);
 
  printf("Sum of entered matrices:-\n");
 
  for (int c = 0; c < m; c++) {
    for (int d = 0 ; d < n; d++) {
      sum[c][d] = first[c][d] + second[c][d];
      printf("%d\t", sum[c][d]);
    }
    printf("\n");
  }
 
  return 0;
}