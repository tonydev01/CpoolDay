
#include <unistd.h>
#include <stdio.h>

int my_get_char_repeat(char toFind, const char *to_search)
{
    int i = 0 ;
    int nbr = 0 ;
    while (to_search[i] != '\0')
    {
        if(to_search[i] == toFind)
        {
            nbr += 1;
        }

        i++;
    }

    return nbr;
    
}