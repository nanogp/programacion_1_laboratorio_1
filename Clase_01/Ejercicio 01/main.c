#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
se ingresan numeros (distintos de cero) y no se sabe cuantos
informar:
1) a- cantidad de pares
   b- cantidad de impares
2) porcentaje de numeros
   a- positivos
   b- negativos
3)a- máximo
  b- minimo
4) de los pares, el máximo
*/


int main()
{
    int numeroIngresado;
    int cantidadTotal = 0;
    int cantidadPares = 0;
    int cantidadImpares = 0;
    int maximo;
    int minimo;
    int cantidadPositivos = 0;
    int cantidadNegativos = 0;
    float porcentajePositivos;
    float porcentajeNegativos;
    char respuesta = 'S';

    while(toupper(respuesta) != 'N')
    {
        printf("\nIngrese un numero: ");
        scanf("%d",&numeroIngresado);
        cantidadTotal++;

        if(numeroIngresado != 0)
        {
            if(numeroIngresado % 2 == 0)
            {
                cantidadPares++;
            }
            else
            {
                cantidadImpares++;
            }

            if(numeroIngresado > 0)
            {
                cantidadPositivos++;
            }
            else
            {
                cantidadNegativos++;
            }
        }

        if(cantidadTotal == 0)
        {
            maximo = numeroIngresado;
            minimo = numeroIngresado;
        }
        else
        {
            if(numeroIngresado > maximo)
            {
                maximo = numeroIngresado;
            }

            if(numeroIngresado < minimo)
            {
                minimo = numeroIngresado;
            }
        }

        printf("Desea continuar? (S/N)\n");
        respuesta = getche();
    }//loop

    porcentajePositivos = (cantidadPositivos * 100) / cantidadTotal;
    porcentajeNegativos = (cantidadNegativos * 100) / cantidadTotal;

    printf("\nCantidad de pares: %d", cantidadPares);
    printf("\nCantidad de impares: %d", cantidadImpares);
    printf("\nCantidad de positivos: %d", cantidadPositivos);
    printf("\nCantidad de negativos: %d", cantidadNegativos);
    printf("\nCantidad total: %d", cantidadTotal);
    printf("\nPorcentaje de positivos: %.2f", porcentajePositivos);
    printf("\nPorcentaje de negativos: %.2f", porcentajeNegativos);
    printf("\nM ximo: %d", maximo);
    printf("\nM¡nimo: %d", minimo);

    return 0;
}

