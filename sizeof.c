#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    void *vptr = malloc(1024); //change both data types to cast
    fprintf(stdout,"sizeof(vptr) = %ld\n", sizeof(vptr)); //pointer 64 bit program, 8 bytes per pointer
    fprintf(stdout,"sizeof(*vptr) = %ld\n", sizeof(*vptr)); //what is the size of what it's pointing to, currently void, defaults to char 1 byte
    fprintf(stdout,"sizeof(vptr) = %ld\n", strlen(vptr));
    return 0;
}