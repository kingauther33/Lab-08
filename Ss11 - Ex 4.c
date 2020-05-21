#include <stdio.h>

int main()
{
	char ary[5];
	int i;
	printf("Nhap vao chuoi: ");
	scanf("%s", ary);
	printf("The string is %s\n", ary);
	for (i=0; i<5; i++)
		printf("%d\t", ary[i]);
}
