#include <stdio.h>
#include <stdlib.h>

int main()
{

    char vetor1[5] = {'P', 'E', 'i', 'X', 'E'};
    char vetor2[5] = {'B', 'O', 'M', 'B', 'A'};

    printf("ANTES   \n\n\n");

    for (int i = 0; i < 5; i++)
    {

        printf("%c", vetor1[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {

        printf("%c", vetor2[i]);
    }

    for (int i = 0; i < 5; i++)
    {

        char aux = vetor1[i];

        vetor1[i] = vetor2[i];
        vetor2[i] = aux;
    }

    printf("\n\nDEPOIS \n\n");

    for (int i = 0; i < 5; i++)
    {

        printf("%c", vetor1[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {

        printf("%c", vetor2[i]);
    }

    return 0;
}