#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;
	int min, max;
	
	printf("��J�T�Ӿ�ơA�����ϥΪťն��j\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	min = num1;
	max = num1;

	if (num2 >= num3)                
	{
		if (num2 >= num1)    /*�P�_�̤j*/
		{
			max = num2;
		}
		else
		{
			max = num1;
		};
		if (num3 <= num1)    /*�P�_�̤p*/
		{
			min = num3;
		}
		else
		{
			min = num1;
		};
	}
	else
	{
		if (num3 >= num1)    /*�P�_�̤j*/
		{
			max = num3;
		}
		else
		{
			max = num1;
		};
		if (num2 <= num1)    /*�P�_�̤p*/
		{
			min = num2;
		}
		else
		{
			min = num1;
		};
	};

	printf("�̤j�ƭȬ�%d \n", max);
	printf("�̤p�ƭȬ�%d \n", min);
	system("pause");
	return 0;
}