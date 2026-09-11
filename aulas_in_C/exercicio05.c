#include <stdio.h>
#include <math.h>

int main(){
      int dtr;
      printf("Informe um numero: ");
      scanf("%d", &dtr);
      printf("O dobro de %d, vale: %d.\n", dtr, dtr * 2);
      printf("O triplo de %d, vale: %d.\n", dtr, dtr * 3);
      printf("A raiz de %d, vale: %.2f.\n", dtr, sqrt(dtr));
      return 0;
}
