//Write a c program that uses functions to perform the multiplication of two Matrices

#include <stdio.h> 


// Function to multiply two matrices 
void multiply(int mat1[3][3], int mat2[3][3], int res[3][3]) 
{ 
	int i, j, k; 
	for (i = 0; i < 3; i++) 
	{ 
		for (j = 0; j < 3; j++) 
		{ 
			res[i][j] = 0; 
			for (k = 0; k < 3; k++) 
				res[i][j] += mat1[i][k] * mat2[k][j]; 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	int i, j; 
	int res[3][3]; // To store result 
	int mat1[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}}; 
	int mat2[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}}; 

	multiply(mat1, mat2, res); 

	printf("Result matrix is \n"); 
	for (i = 0; i < 3; i++) 
	{ 
		for (j = 0; j < 3; j++) 
		printf("%d ", res[i][j]); 
		printf("\n"); 
	} 
	return 0; 
}