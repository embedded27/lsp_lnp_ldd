//Heap buffer overflow
#include <stdlib.h>
int main(int argc, char **argv) {
 int *array = malloc(sizeof(int)*100);
 //int res = array[argc + 100]; // BOOM
 //working
 int res= array[argc+98];
 free(array);
 return res;
}
