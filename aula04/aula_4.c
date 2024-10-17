#include <stdio.h>


int main() {
    printf("int: %d bytes \n", sizeof(long int));
    return 0;
}


void printTipoNumeros() {

    int x = 10;
    int y = x++;
    int n = 17, k = 0x11, m = 021;

   
    printf("Decimal = %d\n", n);
    printf("Hexadecimal = %x\n", n);
    printf("Octal = %o\n",n);
    printf("Decimal = %d\n", k);
    printf("Hexadecimal = %x\n", k);
    printf("Octal = %o\n", k);
    printf("Decimal = %d\n", m);
    printf("Hexadecimal = %x\n", m);
    printf("Octal = %o\n", m);

}