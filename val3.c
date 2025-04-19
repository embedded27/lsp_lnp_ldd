//Invalid pointer use
#include <stdlib.h>

int main()
{
    char *x = malloc(10);
   // x[10] = 'a';
   //working
   x[9]= 'a';
    free(x);
    return 0;
}
