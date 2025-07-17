#include <stdio.h>

float add(float a, float b)
{
	return a + b;
}

float subtract(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	return a/b;
}

int main(void)
{
	float (*operation[4])(float, float) = {add, subtract, multiply, divide};
	int choice;
	float a, b, result;
	while(1){
		printf("What do You want ?\n");
		printf("1. To Add\n2. To Subtract\n3. To Multiply\n4. To Divide\n5. Exit\n");
		scanf("%d", &choice);

		if(choice < 1 || choice > 5){
			printf("\n--invalid choice--\n");
			continue;
		}

		if(choice == 5){
			printf("\nEXITING...\n");
			break;
		}

		printf("Enter 1st Number : ");
		scanf("%f", &a);
		printf("Enter 2nd Number : ");
		scanf("%f", &b);

		result = (*operation[choice - 1])(a, b);
		printf("Result : %.2f\n", result);
	}
	return 0;
}
