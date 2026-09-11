#include <stdio.h>

int main(){
      float salary, aumento, salary_final;
      printf("Informe seu salario: R$");
      scanf("%f", &salary);
      printf("Informe o aumento em %%: -> ");
      scanf("%f", &aumento);
      salary_final = salary + ((salary * aumento) / 100);
      printf("O seu salario antigo era: R$%.2f reais.\n", salary);
      printf("Apos ganha %.2f%% de aumento, vale: R$%.2f reais.\n", aumento, salary_final);
      return 0;
}
