#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, Rcm, Rpol, Rjar;
    printf("Escreva o tamanho em cm da base do retangulo:\n");
    scanf("%f", &base);

    printf("Escreva o tamanho em cm da altura do retangulo:\n ");
    scanf("%f", &altura);

    if (base <=0 || altura <= 0){
        printf("Coloque um valor acima de 0");
    }
    else{



    Rcm = (2 * altura) + (base * 2);
    Rpol = Rcm * 0.3987;
    Rjar = Rcm * 0.109;

    printf("A medida em cm do perimento é igual a: %0.3f cm\n", Rcm);
    printf("A medida em polegadas do perimento é igual a: %0.3f pol\n", Rpol);
    printf("A medida em jardas do perimento é igual a: %0.3f jardas\n", Rjar);
    return 0;
    }
}
