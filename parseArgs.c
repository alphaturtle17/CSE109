#include <stdio.h>
int main(int argc, char *argv[]){
	int i;
	printf("Program name: %s\n", *argv);
	printf("Number of arguments: %d\n", argc);
	for(i = 1; i < argc; i++) printf("Arg %d: %s\n", i, *++argv);
	return 0;
}

