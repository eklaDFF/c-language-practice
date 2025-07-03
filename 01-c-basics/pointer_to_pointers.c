#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// pointer to pointer is purposeful when 2-D array is created

	int row = 10;
	int column = 5;
	int **arr = malloc(row * sizeof(int *));

	for(int  i = 0; i < row; i++){
		arr[i] = (int *) malloc(column * sizeof(int));
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			arr[i][j] = i + j;
		}
	}

	printf("arr[4][4] = %d\n", arr[4][3]);
	printf("arr[4][4] = %d\n",*(*(arr + 4) + 3));
}
