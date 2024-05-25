#include <unistd.h>

void print_char(char c);

void my_print_ascii(void)
{
    int a = 32;
    while (a != 126){
        print_char(a);

        a++ ;
    }
   
      
  
}



