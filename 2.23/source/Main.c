#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;
	int min, max;
	
	printf("块俱计い丁ㄏノフ丁筳\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	min = num1;
	max = num1;

	if (num2 >= num3)                
	{
		if (num2 >= num1)    /*耞程*/
		{
			max = num2;
		}
		else
		{
			max = num1;
		};
		if (num3 <= num1)    /*耞程*/
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
		if (num3 >= num1)    /*耞程*/
		{
			max = num3;
		}
		else
		{
			max = num1;
		};
		if (num2 <= num1)    /*耞程*/
		{
			min = num2;
		}
		else
		{
			min = num1;
		};
	};

	printf("程计%d \n", max);
	printf("程计%d \n", min);
	system("pause");
	return 0;
}