#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    char *msg = "Hello world!";
    char *ptr = NULL;
    //Non working
    //ptr = malloc(strlen(msg));

    //working
    ptr = (char*)malloc(strlen(msg)+1);
    strcpy(ptr, msg);

    printf("%s\n", ptr);

    //working
    free(ptr);
    ptr=NULL;
    return 0;
}
