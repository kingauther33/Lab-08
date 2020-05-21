#include <stdio.h>
#include <string.h>

int main()
{
	char ch[100], temp[100];
	int i, j, dem;
	dem = 0;
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
		}
	}
/////////////////////////////////////////////// 
	printf("Chuoi ki tu ban vua nhap la: %s\n", ch); // neu cho lenh nay len tren thi ko can chuoi ki tu temp.
	printf("So cac ki tu nguyen am trong chuoi tren la: %d\n", dem);	
}
