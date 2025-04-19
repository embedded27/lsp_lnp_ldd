#include <stdlib.h>
int main(int argc, char **argv) {
 int *array =  malloc(sizeof(int)*100);
 //working
 int test;
 test=array[argc];
 free(array);
 //return array[argc]; // BOOM
 //Working
 return test;
}

