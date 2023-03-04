#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void yomama(int *ptr, int x);

int main() {
  
  void *vptr = malloc(1024);
  fprintf(stdout, "sizeof(vptr) = %ld\n", sizeof(vptr));
  fprintf(stdout, "sizeof(*vptr) = %ld\n", sizeof(*vptr));  /* same as vptr[0] */

  char *cptr = (char *)malloc(1024);
  for (int i = 0; i < 1024; i++) {
    cptr[i] = 'z';
    fprintf(stdout, "%c", cptr[i]);
  }

  cptr[1024] = 'a';
  fprintf(stdout, "sizeof(cptr) = %ld\n", sizeof(cptr));
  fprintf(stdout, "strlen(cptr) = %ld\n", strlen(cptr));
  
  int *iptr = (int *) malloc(256 /**/* sizeof(int)); //Allocates for a dynamic size of integer, or structure that holds integers etc.
  fprintf(stdout, "sizeof(iptr) = %ld\n", sizeof(iptr));
  fprintf(stdout, "sizeof(*iptr) = %ld\n", sizeof(*iptr));
  //instead of defaulting to 4, expect 19 to print size of integer, 8. Line 20 will return 4 because it is defined as integer.
  //if malloc returns nonzero, we know we're pointing to a pointer of that size unless otherwise, or null terminated.
  iptr[256] = -1; 

  int dork = 391;
  //how do we set a pointer, declare and define, so we can access dork in memory (without referring to dork)
  int *ptrDork = &dork;

  yomama(ptrDork, 3); //call to function, need prototype 

  printf("Dork: %d\n",dork);
  printf("Dork pointer: %ls\n", ptrDork); //ls like the command..?

  return 0;
}

void yomama(int *ptr, int x){
  *ptr = 2 * *ptr + x;
}