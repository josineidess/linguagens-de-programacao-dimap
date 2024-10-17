#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  segundoTeste();

   return 0;
}

void segundoTeste() {
  float num1, num2;

  double resultado;
  printf("Digite um numero: ");
  scanf("%f", &num1);
  printf("digite outro numero: ", &num1);
  scanf("%f", &num2);
  resultado = num1 + num2;
  printf("%f + %f = %f", num1, num2,resultado);
}

void primeroTeste() {
     long double var1 = 45.6678345345;
   int numero, num1, num2;

   printf("Digite um numero: ");
   //o i tem suporte para receber numeros em diferentes bases como decimal, octal e hexadecimal 
   //se for x na entrada ele vai converter de hexadecimal para decimal, se colocar o 'o' será de octal para decimal
   scanf("%x", &numero); 
   printf("%d", numero);

   printf("Insira dois numeros: ");
   scanf("%d %d",&num1, &num2);
   printf("Voce digitou '%d' e '%d' ", num1, num2);
}

void printLimitsFloats() {
  printf("menor float = %e; \n", FLT_MIN);
  printf("maior float = %e; \n", FLT_MAX);
  printf("menor doble = %e; \n", DBL_MIN);
  printf("maior doble = %e; \n", DBL_MAX);
  printf("menor doble long = %Le; \n", LDBL_MIN);
  printf("maior doble long = %Le; \n", LDBL_MAX);
  printf("epsilon float = %e; \n", FLT_EPSILON);
  printf("epsilon double = %e; \n", DBL_EPSILON);
  printf("epsilon long double = %Le; \n", LDBL_EPSILON);
}

void printLimitsInt() {
  printf("menor inteiro curto = %hd; \n", SHRT_MIN);
  printf("maior inteiro curto = %hd; \n", SHRT_MAX);
  printf("menor inteiro = %d; \n", INT_MIN);
  printf("maior inteiro = %d; \n", INT_MAX);
  printf("menor inteiro long = %Ld; \n", LONG_MIN);
  printf("maior inteiro long = %Ld; \n", LONG_MAX);
  printf("maior inteiro curto sem sinal = %hu; \n", USHRT_MAX);
  printf("maior inteiro sem sinal = %u; \n", UINT_MAX);
  printf("maior inteiro longo sem sinal = %u; \n", ULONG_MAX);
}

void printLimitsChar() {
    printf("menor char = %hhd; \n", SCHAR_MIN);
    printf("maior char = %hhd; \n", SCHAR_MAX);
    printf("maior char sem sinal = %hhu; \n", UCHAR_MAX);
    printf("char %d bytes \n", sizeof(char));
    printf("char %d bits \n", CHAR_BIT);
}

void printChars() {
  char a = '0', b = 48, c = 060, d = 0x30, e = '\n', f = '\t';
  printf("char1 = %c; \n", a);
  printf("char2 = %c; \n", b);
  printf("char3 = %c; \n", c);
  printf("char4 = %c; \n", d);
  printf("char5 = %c; \n", e);
  printf("char6 = %c; \n", f);
}

void printBool() {
  printf("bool = %u \n", sizeof(bool));
}

