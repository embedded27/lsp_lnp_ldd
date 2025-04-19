#include <stdlib.h>
int main()
{
    char *x = malloc(100); /* or, in C++, "char *x = new char[100] */

    //Working
    free(x);
    x=NULL;
    return 0;
}
