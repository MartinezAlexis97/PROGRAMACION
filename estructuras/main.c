#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 10

int main()
{
    char nombre[][20] = { {"Juana"}, {"Jose"}, {"Alberto"}, {"Sonia"}, {"Ana"}, {"Pedro"}, {"Susana"}};
    int legajos[] = {234, 453, 112, 876, 543, 857, 322};
    float sueldos[] = { 23500.50, 34000, 45750, 23400, 13200, 28750, 32120};
    char sexos[] = { 'f', 'm', 'm', 'f','f','m', 'f'};
    int auxInt;
    char auxChar;
    float auxFloat;
    char auxCad[20];


    printf("Nombre  Legajo  Sexo    Sueldo\n\n");

    for(int i=0; i < TAM; i++)
    {
        printf("%10s %d     %c      %.2f\n", nombre[i], sueldos[i]);
    }

    printf("\n\n");

    for(int i=0; i < TAM -1; i++)
    {
        for(int j= i + 1; j < TAM; j++)
        {
            if(sexos[i] > sexos[j])
            {
                auxChar = sexos[i];
                sexos[i] = sexos[j];
                sexos[j] = auxCad;

                auxFloat = sexos[i];
                sexos[i] = sexos[j];
                sexos[j] = auxCad;
            }
        }

    }
    return 0;
}
