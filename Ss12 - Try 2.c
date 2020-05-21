#include <stdio.h>
#include <string.h>

int main()
{
	char ch[100], temp[100];
	int i, j, dem, dem1;
	dem = dem1 = 0;
	printf("Moi ban nhap chuoi cac ki tu: ");
	scanf("%[^\n]", ch);
	strcpy(temp, ch);
	strlwr(temp);
/////////////////////////////////////////////// 
	for (i=0; i<strlen(temp); i++)
	{
		switch (temp[i])
		{
			case 'u' :
			case 'e' :
			case 'o' :
			case 'a' :
			case 'i' :
				dem++;
				break;
			default :
				if (temp[i] != ' ')
					dem1++;
				break;			
		}
	}
/////////////////////////////////////////////// 
	printf("Chuoi ki tu ban vua nhap la: %s\n", ch); // neu cho lenh nay len tren thi ko can chuoi ki tu temp.
	printf("So cac ki tu la nguyen am trong chuoi tren la: %d\n", dem);
	printf("So cac ki tu la phu am trong chuoi tren la: %d\n", dem1);
}
