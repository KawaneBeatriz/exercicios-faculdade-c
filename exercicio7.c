# include <stdio.h>
# include <stdlib.h>

          int main () {

          int Numero;
          int Segundos;
          int Horas;
          int Minutos;
          int Resto;

          printf("Qual o valor em segundos?");
          scanf("%d", &Numero);

          Horas = Numero / 3600;
          Resto = Numero % 3600;
          Minutos = Resto / 60;
          Segundos = Resto % 60;

          printf("O numero convertido em horas, minutos e segundos ficaria: %d:%d:%d.\n", Horas, Minutos, Segundos);

          return 0;

          }
