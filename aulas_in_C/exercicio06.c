#include <stdio.h>

int main(){
      float nota1, nota2, media;
      printf("Informe sua primeira nota: ");
      scanf("%f", &nota1);
      printf("Informe sua segunda nota: ");
      scanf("%f", &nota2);
      media = (nota1 + nota2) / 2;
      printf("Sua media vale: %.2f.\n", media);
      return 0;
}
