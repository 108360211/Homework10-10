#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("輸入兩個整數\n");
	scanf_s("%d%d", &num1, &num2);

	if (num1 % num2 == 0)
	{
		printf("%d為%d的倍數\n", num1, num2);
	}
	else
	{
		printf("%d不為%d的倍數\n", num1, num2);
	};
	
	system("pause");
	return 0;
}