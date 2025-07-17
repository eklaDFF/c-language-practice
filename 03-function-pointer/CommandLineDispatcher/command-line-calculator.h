#ifndef COMMAND_LINE_CALCULATOR
#define COMMAND_LINE_CALCULATOR

struct Command{
	char *name;
	void (*operation)(char *arg1, char *arg2);
};

void add(char *arg1, char *arg2);
void subtract(char *arg1, char *arg2);
void multiply(char *arg1, char *arg2);
void divide(char *arg1, char *arg2);
void help(char *arg1, char *arg2);
void exit_program(char *arg1, char *arg2);

extern struct Command commands[];
extern int NUM_COMMANDS;

#endif
