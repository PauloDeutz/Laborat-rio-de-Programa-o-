#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float B1, C1;

    printf("Calculadora para hipotenusa (A) de um triângulo retangulo de catetos B e C\n");
    printf("Qual o valor de B?\n");
    scanf("%f", &B1);
    printf("Qual o valor de C?\n");
    scanf("%f", &C1);

    float B2 = pow(B1, 2);
    float C2 = pow(C1, 2);
    float D = B2 + C2;
    float A = pow(D, 0.5);

    printf("O valor da hipotenusa é igual a: %.2f\n", A);

    return 0;
}
