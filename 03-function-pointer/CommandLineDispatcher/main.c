#include <stdio.h>
#include <string.h>

#include "command-line-calculator.h"

int main(void)
{
	char input[100];
	char *cmd, *arg1, *arg2;

	printf("Command-Line Calculator (type 'help' for commands)\n");

	while(1){
		printf("> ");
		fgets(input, sizeof(input), stdin);
		input[strcspn(input, "\n")] = 0;

		cmd = strtok(input, " ");
		arg1 = strtok(NULL, " ");
		arg2 = strtok(NULL, " ");

		if(cmd == NULL) continue;

		int found = 0;
		for(int i = 0; i < NUM_COMMANDS; i++){
			if(strcmp(cmd, commands[i].name) == 0){
				commands[i].operation(arg1, arg2);
				found = 1;
				break;
			}
		}
		if(!found){
			printf("Unknown command: %s (type 'help')\n", cmd);
		}
	}
	return 0;
}
