#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int num[100];
	int l;
	int num1[100];
	int i,j,temp;
	printf("Nhap tong so luong diem cua cac sinh vien: ");
	scanf("%d", &n);
	for(l=0; l<n; l++)
	{
		printf("Nhap diem sinh vien thu %d: ", l+1);
		scanf("%d", &num[l]);
	}
	for (i=0; i<n; i++)
		num1[i] = num[i];
	for(i=0; i<n-1; i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(num1[i] < num1[j])
			{
			temp = num1[i];
			num1[i] = num1[j];
			num1[j] = temp;
			}
		}
	}
	for(i=0; i<n; i++)
		printf("\nDiem sinh vien cao thu %d la: %d", i+1, num1[i]);
	return 0;
}
