#include <unistd.h>
#include <stdio.h>

void print_char(char c);

int my_strlen(char *toRevert)
{
    int nbrchar = 0;
    while(toRevert[nbrchar] != '\0')
    {
        nbrchar++;
        printf("%d \n", nbrchar);
    }
    return nbrchar;
}

void my_print_revert(char *toRevert)
{    
    int nbrchar = my_strlen(toRevert);

    while(nbrchar != 0)
    {
        print_char(toRevert[nbrchar - 1 ]);
        nbrchar--;
    }

    
}