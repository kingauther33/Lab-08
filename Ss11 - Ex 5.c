#include <stdio.h>

int main()
{
	int arr[2][3];
	int row, col;
	for(row=0; row<2; row++)
	{
		for(col=0;col<3;col++)
		{
			printf("Enter a Number at [%d][%d] : ",row,col);
			scanf("%d", &arr[row][col]);
		}
	}
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("The Number at [%d][%d] is %d\n", row, col, arr[row][col]);
		}
	}
}
