#include <stdio.h>
#include <stdlib.h>

float main(void)
{
	float BMI, Weight, Height;

	printf("請輸入身高(單位:公尺)\n");
	scanf_s("%f", &Height);

	printf("請輸入體重(單位:公斤)\n");
	scanf_s("%f", &Weight);
	
	BMI = (Weight / Height / Height);

	printf("\n");
	printf("BMI VALUES\n");
	printf("Underweight:\tless than 18.5\n");
	printf("Normal:\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\t30 or greater\n");
	printf("\n");

	printf("你的BMI為%f\n", BMI);

	system("pause");
	return 0;
}