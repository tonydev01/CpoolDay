#include <unistd.h>

void print_char(char c);

void my_print_N_ascii( int howmany)
{
    int a = 32;
    while (a != 32 + howmany  && 32 + howmany <= 126 && 32 + howmany > 32 ){
        print_char(a);

        a++ ;
    }
   
      
  
}

