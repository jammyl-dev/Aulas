#include <stdio.h>

int main(){
      int n1, n2, s;
      printf("Informe o primeiro valor: ");
      scanf("%d", &n1);
      printf("Informe o segundo valor: ");
      scanf("%d", &n2);
      s = n1 + n2;
      printf("A soma entre %d e %d, vale: %d.\n", n1, n2, s);
      return 0;
}
