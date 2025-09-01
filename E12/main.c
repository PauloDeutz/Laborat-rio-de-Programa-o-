#include <stdio.h>
#include <stdlib.h>
#define SM 1518.01
int main()
{
    int alunos = 0;
    float media, quantidade, soma, salario;
    printf("PESQUISA SALARIAL UNIVERSITARIA: \n");
    while(alunos < 5){
        printf("ALUNO %i - SALARIO (>= R$ %.2f): ", alunos + 1, SM);
        scanf("%f", &salario);

        if(salario < SM)
            printf("ERRO: Escolha dnv\n");
        else {
             soma += salario;
             alunos++;
             }
    }
    media = soma / alunos;
    printf("MEDIA SALARIAL: R$ %.2f\n", media);
}
