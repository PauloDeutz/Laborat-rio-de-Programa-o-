#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fulano = 0, beltrano = 0, cicrano = 0, voto;
    int moradores = 0;
    float pfulano, pbeltrano, pcicrano;
    printf("VOTAÇÃO PARA SINDICO:\n");
    printf("MENU DOS CANDIDADoS:\n");
    printf("1: PARA FULANO\n");
    printf("2: PARA BELTRANO\n");
    printf("3: PARA CICRANO\n");
    while(moradores < 10){
        printf("VOTO DO MORADOR %i: \n");
        scanf("%i", &voto);
        if (voto < 0 || voto > 3)
            printf("Voto incorreto\n");
        else{
            if(voto == 1)
                fulano++;
            else if (voto == 2)
                beltrano++;
            else
                cicrano++;
            moradores++;
            pfulano = 100.0 * fulano / moradores;
            pbeltrano = 100.0 * beltrano / moradores;
            pcicrano = 100.0 * cicrano / moradores;
            printf("RESULTADO DA VOTACAO:\n");
            printf("VOTOS DE FULANO: %i (%.2f %%)\n", fulano,pfulano);
            printf("VOTOS DE BELTRANO: %i (%.2f %%)\n", beltrano, pbeltrano);
            printf("VOTOS DE CICRANO: %i (%.2f %%)\n", cicrano, pcicrano);

        }

    }
    return 0;
}
