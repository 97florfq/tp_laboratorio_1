#include <stdio_ext.h>
#include <stdlib.h>
/**
*\brief Pide un numero al usuario.
*\param mensaje Es el mensaje que se va a mostrar
*\return Devuelve el numero ingresado por el usuario
*/
int utn_pedirUnNumero(char mensaje[])
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    return numero;
}
/**
*\brief Realiza el calculo factorial de un numero y muestra el resultado.
*\param numeroIngresado Es el numero ingresado por el usuario
*\return Devuelve el resultado del calculo factorial
*/
int utn_calcularFactorial(int numeroIngresado)
{
int resultado;
if(numeroIngresado==1)
{
  return 1;
}
resultado=numeroIngresado* utn_calcularFactorial(numeroIngresado-1);
return (resultado);
}

/**
*\brief Realiza el calculo sumatorio de dos numeros y muestra el resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\return Devuelve el resultado de la suma.
*/
int utn_sumarDosNumeros(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno + numeroDos;
    printf("El resultado de la suma es %d\n",resultado);
    return resultado;
}


/**
*\brief Realiza la resta de dos numeros y muestra el resultado.
*\param numeroUno Es el primer numero ia de caracteres y haces la validaciones correspondientes, en ngresado.
*\param numeroDos Es el segundo numero ingresado.
*\return retorno Devuelve el resultado de la resta.
*/
int utn_restarDosNumeros(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno - numeroDos;
    printf("El resultado de la resta es %d\n",resultado);
    return resultado;
}

/**
*\brief Realiza el calculo de division de dos numeros y muestra el resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\return retorno Devuelve el resultado de la division.
*/
float utn_dividirDosNumeros(int numeroUno, int numeroDos)
{
    float resultado;
    if(numeroUno== 0)
        {
            printf("Error, no se puede dividir por 0 ");
        }
        else if (numeroDos == 0)
        {
            printf("Error, no se puede dividir por 0 ");
        }
        else
        {
            resultado = numeroUno / numeroDos;
            printf("El resultado de la division es %.2f",resultado);
        }
        return 0;
}
/**
*\brief Realiza la multiplicacion de dos numeros y muestra el resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\return retorno Devuelve el resultado de la multiplicacion.
*/
int utn_multiplicarDosNumeros(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno * numeroDos;
    printf("El resultado de la multiplicacion es %d",resultado);
    return resultado;
}
