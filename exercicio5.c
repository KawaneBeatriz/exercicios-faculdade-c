# include <stdio.h>
# include <stdlib.h>

          int main () {
          float reais;
          float cotaçao;
          float dolares;

          printf("Qual reais voce tem?:");
          scanf("%f", &reais);

          printf("Qual é o valor da cotaçao?");
          scanf("%f", &cotaçao);

          dolares = reais / cotaçao;

          printf("O valor em reais representa essa quantidade de dolares: %.2f\n", dolares);

          return 0;

          }
