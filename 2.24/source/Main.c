#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num1;

	printf("��J�@���,��䬰�_�Ʃΰ���\n");
	scanf_s("%d", &num1);

	if (num1 % 2 == 0)
	{
		printf("%d������\n", num1);
	}
	else
	{
		printf("%d���_��\n", num1);
	};

	system("pause");
	return 0;
}