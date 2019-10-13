#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num1;

	printf("块俱计,侩ㄤ计┪案计\n");
	scanf_s("%d", &num1);

	if (num1 % 2 == 0)
	{
		printf("%d案计\n", num1);
	}
	else
	{
		printf("%d计\n", num1);
	};

	system("pause");
	return 0;
}