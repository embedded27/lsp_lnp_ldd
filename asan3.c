//stack overflow
int main(int argc, char **argv) {
 int stack_array[100];
 stack_array[1] = 0;
 //return stack_array[argc + 100]; // BOOM
//Working
 return stack_array[argc+98];
}

