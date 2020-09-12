#ifndef NUEBO_H_INCLUDED
#define NUEBO_H_INCLUDED
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#endif // NUEBO_H_INCLUDED
/** \brief
 *
 * \param int
 * \return int
 *
 */
int CalcularFactorial(float);
/** \brief  Llamo a la cabecera
 *
 * \param int paso por parametro el entero "numero"
 * \return int "retorno el dato despues de ejecutar el factoreo "
 *
 */
float Divission(float,float);
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

float SumarTotales(float,float);
/** \brief
 *
 * \param int
 * \param int
 * \return int
 *
 */
float RestarTotales(float,float);
/** \brief
 *
 * \param int
 * \param int
 * \return int
 *
 */
float MultiplicarTotales(float,float);


/*1 Enunciado
Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) �El resultado de A+B es: r�
b) �El resultado de A-B es: r�
c) �El resultado de A/B es: r� o �No es posible dividir por cero�
d) �El resultado de A*B es: r�
e) �El factorial de A es: r1 y El factorial de B es: r2�
5. Salir
� Todas las funciones matem�ticas del men� se deber�n realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
� En el men� deber�n aparecer los valores actuales cargados en los operandos A y B
(donde dice �x� e �y� en el ejemplo, se debe mostrar el n�mero cargado)
� Deber�n contemplarse los casos de error (divisi�n por cero, etc)
� Documentar todas las funciones
2 C�mo realizar y entregar el trabajo pr�ctico
El trabajo pr�ctico deber� ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistir� en el proyecto de CodeBlocks con el programa funcionando y comentado,
respetando las reglas de estilo de la c�tedra. La compilaci�n no deber� arrojar mensajes de
error ni de warnings.
El proyecto deber� contar con la biblioteca descripta en la secci�n n�mero dos, y se deber�
hacer uso de dichas funciones para resolver la l�gica del programa.*/