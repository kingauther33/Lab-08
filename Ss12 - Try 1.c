#include <stdio.h>

int main()
{
	int arr[10][20], max, min;
	int i, j, row, col;
	printf("Nhap so hang cua mang: ");
	scanf("%d", &row);
	printf("Nhap so cot cua mang: ");
	scanf("%d", &col);
//////////////////  Khai bao mang ////////////////// 
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			printf("Nhap gia tri tai o [%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
////////////////// In ra mang vua khoi tao //////////////////
	printf("==========================\n");
	printf("Mang vua khoi tao la: "); 
	for (i=0; i<row; i++)
	{
		printf("\n");
		for (j=0; j<col; j++)
			printf("%d\t", arr[i][j]);
	}	
////////////////// Tim max, min //////////////////
	max = min = arr[0][0];
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
			if (arr[i][j] < min)
				min = arr[i][j];
		}		
	}
	printf("\nGia tri lon nhat trong mang la: %d\n", max);
	printf("Gia tri nho nhat trong mang la: %d\n", min);
	return 0;
}
