#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
#include <math.h>
int main()
{
    double raio, altura, Vol, Vol_L, tempo, tempof, hr, min, seg;
    printf("TEPO DE AUTONOMIA: Dados de entrada:\n");
    printf("Raio do tanque (metros): ");
    scanf("%lf", &raio);
    printf("Coloque os valores de altura: ");
    scanf("%lf", &altura);
    printf("");
    if(raio<= 0){
        printf("Coloque o valor maior que zero");
    }
    else{
    printf("Informações do Tanque de Agua:\n");
    Vol = PI * pow(raio,2) * altura;
    Vol_L = Vol * 1000;
    tempo = Vol_L / 1350;
    hr = floor(tempo);
    min = floor((tempo - hr) * 60);
    seg = floor(((((tempo - hr) * 60) - min) * 60));

    printf("Volume: %.lf Metros Cubicos\n", Vol);
    printf("Volume: %.lf Litros\n", Vol_L);
    printf("Tempo: %.lf\n", tempo);
    printf("TEMPO DE AUTONOMIA (HH:MM:SS): %.lf:%.lf:%.lf\n", hr, min, seg);
}
}
