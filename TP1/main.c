#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int utn_pedirUnNumero(char mensaje[]);
int utn_calcularFactorial(int numeroIngresado);
int utn_sumarDosNumeros  (int numeroUno,
                          int numeroDos);
int utn_restarDosNumeros (int numeroUno,
                          int numeroDos);
float utn_dividirDosNumeros (int numeroUno,
                             int numeroDos);
int utn_multiplicarDosNumeros (int numeroUno,
                              int numeroDos);



int main()
{
    int operandoUno;
    int operandoDos;
    char continuar;
    int operacion;
    int resultado;
    printf("CALCULADORA\n");
    operandoUno = utn_pedirUnNumero("Ingrese primer operando: \n");
    operandoDos = utn_pedirUnNumero("Ingrese segundo operando: \n");
    continuar = 's';
    while(continuar!='n')
    {
        printf("Ingrese la operacion que desea realizar: \n");
        printf("Ingrese 1 para Sumar Operandos: %d + %d\n",operandoUno,operandoDos);
        printf("Ingrese 2 para Restar Operandos:%d - %d \n",operandoUno,operandoDos);
        printf("Ingrese 3 para Dividir los Operandos: %d / %d \n",operandoUno,operandoDos );
        printf("Ingrese 4 para Multiplicar los Operandos: %d * %d\n",operandoUno,operandoDos );
        printf("Ingrese 5 para Factoriar Operando 1: %d \n",operandoUno);
        scanf("%d", &operacion);
        if(operacion <1 || operacion > 5)
        {
            printf("Error, ingrese una de las opciones validas entre 1 y 5\n\n");
        }else
        {
            continuar = 'n';
        }
    }
    switch(operacion)
    {
        case 1:
            utn_sumarDosNumeros(operandoUno,operandoDos);
            break;
        case 2:
            utn_restarDosNumeros(operandoUno,operandoDos);
            break;
        case 3:
            if (operandoUno < operandoDos)
            {
                printf("El primer operando no puede ser mayor al segundo");
            }
            else
            {
                utn_dividirDosNumeros(operandoUno,operandoDos);
            }
            break;
        case 4:
            utn_multiplicarDosNumeros(operandoUno, operandoDos);
            break;
        case 5:
            resultado = utn_calcularFactorial(operandoUno);
            printf("El calculo factorial de %d es %d\n",operandoUno,resultado);
            resultado = utn_calcularFactorial(operandoDos);
            printf("El calculo factorial de %d es %d\n",operandoDos,resultado);
            break;
        default:
            break;
    }
}
