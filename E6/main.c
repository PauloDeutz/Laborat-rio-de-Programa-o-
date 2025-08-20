#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, sexo, h, m;
    printf("Informe sua altura em cm\n");
    scanf("%f", &altura);

    printf("Informe seu genero, 1 para homem e 2 para mulher\n");
    scanf("%f", &sexo);

    if (sexo == 1){
        h = (72.7 * altura) - 58;
        printf("O peso ideal para sua altura: %0.2f", h);
    }
    else if (sexo == 2 ){
        m = (62.1 *altura) - 44.7;
        printf("O peso ideal para sua altura: %0.2f", m);
    }
    else{
        printf("Coloque um valor valido");
}
}
