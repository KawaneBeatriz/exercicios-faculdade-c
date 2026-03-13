# include <stdio.h>
# include <stdlib.h>

          int main () {

          char nome[50];
          float salario;
          float venda;
          float comissao;
          float salario_total;
          float salario_final;
          float imposto;

          printf("Qual é o nome do vendedor? \n");
          scanf("%s", &nome);

          printf("Qual é o salario fixo?\n");
          scanf("%f", &salario);

          printf("Qual é o valor total de vendas?\n");
          scanf("%f", &venda);

          comissao = venda * 0.15;
          salario_total = salario + comissao;
          imposto = salario_total * 0.08;
          salario_final = salario_total - imposto;

          printf("Vendedor: %s\n", nome);
          printf("Salario Total com comissao: %.2f\n", salario_total);
          printf("Salario Apos o imposto: %.2f\n", salario_final);

          return 0;

          }
