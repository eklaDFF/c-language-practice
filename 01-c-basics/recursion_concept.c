#include <stdio.h>

int fibonacci_num(int n)
{
	if(n == 0 || n == 1){
		return n;
	}
	return fibonacci_num(n - 1) + fibonacci_num(n - 2);
}

int factorial(int n)
{
	if(n == 0 || n == 1){
		return 1;
	}
	return n * factorial(n - 1);
}

int main(void)
{
	int num = 5;
	printf("%dth Fibonacci Number is %d\n", num, fibonacci_num(num));
	printf("Factorial of %d is %d", num, factorial(num));
}
