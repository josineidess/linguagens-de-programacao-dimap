#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {
  float custoUnidade = atof(argv[1]), icms, ipi, lucro, final;
  
  lucro = custoUnidade / 2;

  icms = ((custoUnidade + lucro) * 0.17) / 0.83;
  ipi = (custoUnidade + icms + lucro) * 0.2;
  final = custoUnidade + lucro + icms + ipi;
  
  printf("---------------------------\n");
  printf("Cálculo do Preço final de X\n");
  printf("---------------------------\n");
  printf("Custo           = R$ %.2f\n", custoUnidade);
  printf("Lucro           = R$ %.2f\n", lucro);
  printf("ICMS            = R$ %.2f\n", icms);
  printf("IPI             = R$ %.2f\n", ipi);
  printf("---------------------------\n");
  printf("Preço Final     = R$ %.2f\n", final);

  return 0;
}
