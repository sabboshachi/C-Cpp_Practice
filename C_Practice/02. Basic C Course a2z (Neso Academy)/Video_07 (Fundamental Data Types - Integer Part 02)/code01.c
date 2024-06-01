#include<stdio.h>
int main(){
    printf("default int sizeof = %d byte\n", sizeof(int)); // by default int 4 byte
    printf("short int sizeof = %d byte\n", sizeof(short int)); // by short int 2 byte
    printf("long int sizeof = %d byte\n", sizeof(long int));  // by long int 4 byte
    printf("long long int sizeof = %d byte\n", sizeof(long long int));  // by long long int 8 byte
    return 0;
}