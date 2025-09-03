#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int atletas = 0, tempo;
    int matricula, matriculaVen;
    float tempoVen = INFINITY;
    int matriculaLan;
    float tempoLan = -INFINITY;
    printf("VALOR: %f", tempoVen);
    printf("DEZ MILHAS GAROTO\n");
    while(atletas < 2){
        printf("Aleta %i: Tempo: ", atletas + 1);
        scanf("%i", &tempo);
        printf("Matricula (XXXX): "); scanf("%i", &matricula);
        if(tempo <= 0)
            printf("ERRO: Valor incorreto.\n");
        else if(matricula < 10000 || matricula > 100000)
            printf("ERRO: Valor incorreto.\n");
        else {
            if(tempo < tempoVen){
                tempoVen = tempo;
                matriculaVen = matricula;
            }
            if (tempo > tempoLan){
                tempoLan = tempo;
                matriculaLan = matricula;
            }
            atletas++;
        }
    }
    printf("Resultado da corrida\n");
    printf("Dados do vencedor\n");
    printf("Matricula: %i\n", matriculaLan);
    printf("Tempo: %.0f\n", tempoVen);
    printf("Dados do Lanterna:\n");
    printf("Matricula %i\n", matriculaLan);
    printf("Tempo: %.0f\n", tempoLan);


    return 0;
}
