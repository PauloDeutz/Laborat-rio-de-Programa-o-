#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
#include <math.h>

int main()
{
    double raio, altura, Area, latas, litros, valor;
    printf("TEPO DE AUTONOMIA: Dados de entrada:\n");
    printf("Raio do tanque (metros): ");
    scanf("%lf", &raio);
    printf("Coloque os valores de altura: ");
    scanf("%lf", &altura);
    printf("");
    if(raio<= 0 || altura<= 0 ){
        printf("Coloque o valor maior que zero");
    }
    else{
    Area = 2 * PI * pow(raio, 2) + 2 * PI * raio * altura;

    litros = Area / 3;

    latas = ceil(litros / 5);

    valor = latas * 50;

    printf("Area do cilindro: %lf\n ", Area);
    printf("Quantidade do latas: %lf\n", latas);
    printf("Valor para realizar a pintura %lf\n", valor);
    }

}
