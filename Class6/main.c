#include <stdio.h>
#include <stdlib.h>



typedef struct{

int legajo;     //4 digitos
char nombre[20];        //menor a 19
char sexo;          // f o m
float sueldo;            // positivo

}Eempleado;

int main()
{
    Eempleado emp1;
    char auxCad[100];

    printf("ingrese legajo: ");
    fflush(stdin);
    scanf("%d", &emp1.legajo);

    printf("ingrese nombre: ");
    fflush(stdin);
    gets(auxCad);

    printf("ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &emp1.sexo);

    printf("ingrese sueldo: ");
    fflush(stdin);
    scanf("%f", &emp1.sueldo);

    printf("Legajo: %d  Nombre: %s  Sexo: %c    Sueldo: %.2f\n", emp1.legajo, auxCad, emp1.sexo, emp1.sueldo);
    return 0;
}
