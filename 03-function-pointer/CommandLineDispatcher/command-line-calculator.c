#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "command-line-calculator.h"

void add(char *arg1, char *arg2)
{
	float a = atof(arg1);
	float b = atof(arg2);
	printf("%.2f\n", (a + b));
}

void subtract(char *arg1, char *arg2)
{
	float a = atof(arg1);
	float b = atof(arg2);
	printf("%.2f\n", (a - b));
}

void multiply(char *arg1, char *arg2)
{
	float a = atof(arg1);
	float b = atof(arg2);
	printf("%.2f\n", (a * b));
}

void divide(char *arg1, char *arg2)
{
	float a = atof(arg1);
	float b = atof(arg2);
	printf("%.2f\n", (a / b));
}

void help(char *arg1, char *arg2)
{
	printf("Available commands:\n");
	printf("add a b       : Add two numbers\n");
	printf("subtract a b  : Subtract b from a\n");
	printf("multiply a b  : Multiply two numbers\n");
	printf("divide a b    : Divide a by b\n");
	printf("help          : Show this help\n");
	printf("exit_program  : Exit the program\n");
}

void exit_program(char *arg1, char *arg2)
{
	printf("Exiting...\n");
	exit(0);
}

struct Command commands[6] = {{"add", add}, {"subtract", subtract}, {"multiply", multiply}, {"divide", divide}, {"help", help}, {"exit_program", exit_program}};
int NUM_COMMANDS = sizeof(sizeof(commands) / sizeof(commands[0]));
