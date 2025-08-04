#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N1, N2;
    printf("MINI CALCULADORA DE INTEIROS: N1 e N2\n");
    printf("VALOR DE N1: ");
    scanf("%i", &N1);
    printf("VALOR DE N2: ");
    scanf("%i", &N2);
    printf("ADICAO: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("SUBTRACAO: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("MULTIPLICACAO: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
    printf("DIVISAO: N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
    printf("DIVISAO: N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1 / N2);
    printf("QUOCIENTE (int): N1 div N2 = %i / %i = %i\n", N1, N2, N1 / N2);
    printf("RESTO (int): N1 mod N2 = %i %% %i = %i\n", N1, N2, N1 % N2);
    printf("POTENCIACAO: N1 elevado N2 = %i elevado %i = %.1f\n", N1, N2, pow(N1,N2));
    printf("RADICIACAO: N1 raiz N2 = %i raiz %i = %1f\n", N1, 1.0 /N2, pow(N1, N2));
    return 0;
}
