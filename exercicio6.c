# include <stdio.h>
# include <stdlib.h>

          int main () {

              int Numero;
              int Antecessor;
              int Sucessor;

              printf("Digote um numero:");
              scanf("%d", &Numero);

              Antecessor = Numero - 1;
              Sucessor = Numero + 1;

              printf("O numero inteiro é igual a: %d\n", Numero);
              printf("O numero Antecessor do numero inteiro é igual a: %d\n", Antecessor);
              printf("O numero Sucessor do numero inteiro é igual a: %d\n", Sucessor);

              return 0;

              }
