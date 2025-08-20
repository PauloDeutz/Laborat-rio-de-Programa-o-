#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, pf, proc;
    int op;

    printf("Informe o preco do produto:\n");
    scanf("%f", &preco);

    if (preco >= 0) {
        printf("Informe se voce quer acrescimo (1) ou desconto (2):\n");
        scanf("%d", &op);

        if (op == 1 || op == 2) {
            printf("Informe a porcentagem de acrescimo/desconto:\n");
            scanf("%f", &proc);

            if (proc > 0) {
                if (op == 1) {
                    pf = preco * (1 + proc / 100);
                    printf("Preco final com acrescimo: %.2f\n", pf);
                } else {
                    pf = preco * (1 - proc / 100);
                    printf("Preco final com desconto: %.2f\n", pf);
                }
            } else {
                printf("Porcentagem deve ser maior que zero.\n");
            }
        } else {
            printf("Opcao invalida. Escolha 1 para acrescimo ou 2 para desconto.\n");
        }
    } else {
        printf("Preco invalido\n");
    }

        return 0;
    }
