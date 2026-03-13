# include <stdio.h>
# include <stdlib.h>

          int main() {
          float Nota1;
          float Nota2;
          float Nota3;
          float media;

          printf("Digite sua primeira nota:");
          scanf("%f", &Nota1);

          printf("Digite sua segunda nota:");
          scanf("%f", &Nota2);

          printf("Digite sua terceira nota:");
          scanf("%f", &Nota3);

          media = (Nota1 * 2 + Nota2 * 3 + Nota3 * 5) / 10;

          printf(" A mEdia ponderada é: %.2f\n", media);

          return 0;

          }
