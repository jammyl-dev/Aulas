#include <stdio.h>

int main(){
      float metro;
      printf("Informe um valor em metro: ");
      scanf("%f", &metro);
      printf("A medida de %.2f metros, corresponde a: %.2f km.\n", metro, metro / 1000);
      printf("A medida de %.2f metros, corresponde a: %.2f hm.\n", metro, metro / 100);
      printf("A medida de %.2f metros, corresponde a: %.2f dam.\n", metro, metro / 10);

      printf("A medida de %.2f metros, corresponde a: %.2f dm.\n", metro, metro * 10);
      printf("A medida de %.2f metros, corresponde a: %.2f cm.\n", metro, metro * 100);
      printf("A medida de %.2f metros, corresponde a: %.2f mm.\n", metro, metro * 1000);
      return 0;
}
