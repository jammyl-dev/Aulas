#include <stdio.h>

int main(){
      int num;
      printf("Informe um valor qualquer: ");
      scanf("%d", &num);
      printf("O sucessor de %d, vale: %d.\n", num, num + 1);
      printf("O antecessor de %d, vale: %d.\n", num, num - 1);
      return 0;
}
