# include <stdio.h>
# include <stdlib.h>

          int main () {

          float metros;
          float decimetros;
          float centimetros;
          float milimetros;

          printf("Qual é o valor em metros?");
          scanf("%f", &metros);

          decimetros = metros * 10;
          centimetros = metros * 100;
          milimetros = metros * 1000;

          printf("O valor de metros em decimetro é igual a: %.2f\n", decimetros);
          printf("O valor de metros em centimetros é igual a: %.2f\n", centimetros);
          printf("O valor de metros em milimetros é igual a %.2f\n", milimetros);

          return 0;


          }
