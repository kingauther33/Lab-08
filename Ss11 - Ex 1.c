#include <stdio.h>

int main()
{
	int so[5];
	int i;
	so[0] = 10;
	so[1] = 5;
	so[2] = 6;
	so[3] = 11;
	so[4] = 15;
	for (i=0; i<5; i++)
		printf("So o vi tri [%i] la: %d \n",i ,so[i]);
	return 0;
}
