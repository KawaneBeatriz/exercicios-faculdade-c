# include <stdio.h>
# include <stdlib.h>

          int main () {

          int num1;
          int num2;
          int soma;

          printf("Digite um numero:");
          scanf("%d", &num1);

          printf("Digite outro numero:");
          scanf("%d", &num2);

          soma = num1 + num2;

          printf("O primeiro numero é igual a: %d\nO segunda numero é igual a: %d\nE a soma é igual a: %d\n", num1, num2, soma);

          return 0;

          }
