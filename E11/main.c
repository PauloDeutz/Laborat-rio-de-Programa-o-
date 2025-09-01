#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, quantidade = 0, X, soma = 0;
    float media;
    printf("VAlor inteiro de X(X >= 1): ");
    scanf("%i", &X);
    if (X < 1)
        printf("ERRO: Valor Incorreto\n");
    else{
        printf("OS impares entre [%i, %.0f] sao:\n", X, pow(X, 3));
        for(contador = X; contador <= pow(X, 3); contador++){
            if (contador % 2 != 0){
                quantidade++;
                soma = soma + contador;
                printf("Impar %i: %i\n", quantidade, contador);
            }
        }

        media = 1.0 * soma/quantidade;
        printf("Soma dos %i Impares eh: %i\n", quantidade, soma);
        printf("Media dos %i Impares eh: %.1f\n", quantidade, media);
    }



}
