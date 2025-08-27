#include <stdio.h>
#include <stdlib.h>

int main()
{
    int select;
    float N1, N2;
    printf("Calculadora\n");
    printf("Selecione a op��o no MENU:\n");
    printf("[1]: SOMA: N1 + N2\n[2]: SUBTRA��O: N1 - N2\n[3]: MULTIPLICA��O: N1 * N2\n[4]: DIVIS�O (float): N1 / N2\n[5]: DIV (int): N1 / N2\n[6]: MOD (int): N1 %% N2\n");
    scanf("%d", &select);

    printf("Digite o valor de N1: ");
    scanf("%f", &N1);
    printf("Digite o valor de N2: ");
    scanf("%f", &N2);

    if(select == 1){
        printf("Resultado: %.2f\n", N1 + N2);
    }
    else if(select == 2){
        printf("Resultado: %.2f\n", N1 - N2);
    }
    else if(select == 3){
        printf("Resultado: %.2f\n", N1 * N2);
    }
    else if(select == 4){
        if(N2 != 0){
            printf("Resultado: %.2f\n", N1 / N2);
        } else {
            printf("Erro: Divis�o por zero\n");
        }
    }
    else if(select == 5){
        if((int)N2 != 0){
            printf("Resultado: %d\n", (int)N1 / (int)N2);
        } else {
            printf("Erro: Divis�o por zero\n");
        }
    }
    else if(select == 6){
        if((int)N2 != 0){
            printf("Resultado: %d\n", (int)N1 % (int)N2);
        } else {
            printf("Erro: Divis�o por zero\n");
        }
    }
    else{
        printf("Op��o inv�lida\n");
    }

    return 0;
}
