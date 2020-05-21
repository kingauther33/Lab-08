#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, n;
	char temp[20];
	char ten[100][20];
	n = 0;
	printf("Nhap ten cac thanh vien\n");
	printf("Go 'END' de ket thuc viec nhap.\n");
	printf("==========================\n");
///////////////////////////////////////////////
	do
	{
		printf("Nhap ten thu %d: ", n + 1);
		scanf("%s", ten[n]);
		fflush(stdin);
	} while (strcmp((strlwr(ten[n++])), "end"));
	n = n-1;
/////////  Hoan vi  /////////// 
	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
			if (strcmp(ten[i], ten[j]) > 0)
			{
				strcpy(temp, ten[i]);
				strcpy(ten[i], ten[j]);
				strcpy(ten[j], temp);
			}
	}
////////// In hoa chu cai dau tien cua ten nhap vao ////////////
	for (i=0; i<n; i++)
	{
		if (ten[i][0] >= 'a' && ten[i][0] <= 'z')
			ten[i][0] -=32;
	}
/////////////////////////////////////////////// 
	printf("==========================\n");
	printf("Ten sau khi duoc sap xep la:\n");
	for (i=0; i<n; i++)
		printf("Ten thanh vien thu %d la: %s\n", i+1, ten[i]);
	return 0;
}
