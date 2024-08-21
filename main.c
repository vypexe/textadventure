#include <stdbool.h>
#include <stdio.h>
#include "parsexec.h"

static char input[100] = "look around";
static bool getInput(void)
{
   printf("\n--> ");
   return fgets(input, sizeof input, stdin) != NULL;
}


int main(){
    printf("Welcome to Fantasy Islands! \n");
    while (parseAndExecute(input) && getInput());
    printf("These are a collections of islands that appears only in your fantasy! \n");
    printf("\n Have fun! \n");
    return 0;
}
