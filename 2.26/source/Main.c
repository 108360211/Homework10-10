#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("��J��Ӿ��\n");
	scanf_s("%d%d", &num1, &num2);

	if (num1 % num2 == 0)
	{
		printf("%d��%d������\n", num1, num2);
	}
	else
	{
		printf("%d����%d������\n", num1, num2);
	};
	
	system("pause");
	return 0;
}