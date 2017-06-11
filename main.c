//
//  main.c
//  byol-x
//
//  Created by chams on 10/06/2017.
//  Copyright © 2017 Chams. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>



# include <string.h>
/* Declare a buffer for user input of size 2048 */
static char buffer[2048];

char    *readline2(char *prompt) {
    memset(buffer, 0, 2048);
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char    *cpy = (char *)malloc( sizeof(char) * 2048 + 1);
    if (!cpy) {
        fputs("error: malloc in readline2\n", stderr);
        exit(EXIT_FAILURE);
    }
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

#include <editline/readline.h>




int main(int argc, char** argv) {

    puts("Lispy Version 0.0.0.0.1");
    puts("Press ctrl-c to Exit\n");
    
    /* Infinite loop */
    while (42) {
        char    *input = readline2("lispy> ");
        add_history(input);
        
        printf("No you're a %s\n", input);
    }
    
    return 0;
}

