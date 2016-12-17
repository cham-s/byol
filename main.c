#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <editline/readline.h>
//#include <editline/history.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

void	handle_input(char inp[2048])
{
	if (!strcmp(inp, "exit\n") || !strcmp(inp, "quit\n"))
	{
		puts("Bye!");
		exit(0);
	}
}

int main(int ac, char **av)
{
	/* Print Version and Exit Information */
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	/* In a never ending loop */
	while (42)
	{
		/* Output our prompt */
		fputs("lispy> ", stdout);
		/* Read a line of user input of maximum size 2048 */
		fgets(input, 2048, stdin);
		handle_input(input);

		/* Echo input back to user */
		printf("No you're a %s", input);
	}
	return (0);
}
