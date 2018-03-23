#include <stdio.h>
#include <stdlib.h>
//mostrando el porcentaje
//printf("%%");
//printf("%c",37); el ascii

int main()
{
    int porcentajeAumento;
    float sueldo;
    char nombre;
    float aumentoDeSueldo;
    float sueldoConAumento;((sueldo * 20) / 100)

    printf("Ingresar porcentaje de aumento: ");
    scanf("%d",&porcentajeAumento);

    printf("\nIngresar nombre: ");
    fflush(stdin);
    scanf("%c",&nombre);

    printf("\nIngresar sueldo: ");
    scanf("%f",&sueldo);

    aumentoDeSueldo = (float)(sueldo * porcentajeAumento) / 100;
    sueldoConAumento = sueldo + aumentoDeSueldo;

    system("cls");
    printf("A-Nombre: %c \nB-Sueldo: %.2f \nC-Acumento de sueldo: %.2f \nD-Sueldo con aumento: %.2f \nE-Porcentaje: %d\%%",nombre, sueldo, aumentoDeSueldo, sueldoConAumento, porcentajeAumento);

    return 0;
}
