#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10][20];
	int i, j, row, col, temp;
	printf("Nhap so dong cua mang: ");
	scanf("%d", &row);
	printf("Nhap so cot cua mang: ");
	scanf("%d", &col);
	printf("Nhap vao du lieu cho mang:\n");
	printf("==========================\n");
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			printf("Nhap du lieu tai o [%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Ma tran ban vua nhap la:\n");
	for (i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");	
	}
//////////////   Hoan vi ma tran   ////////////// 
	for(i=1; i<col; i++)
	{
		for (j=0; j<i; j++)
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i]; 
			arr[j][i] = temp;
		}
	}
	printf("Ma tran vua duoc hoan vi la: \n");
	for (i=0; i<col; i++)
	{
		for(j=0; j<row; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
	
}
