/*******************************************************
Nombre: Pancardo Botello Isaac
Fecha: 04 / 12 / 2022
Serie C Segundo Parcial
Ejercicio 4. Mayor entre a, b y c
PSEUDOCODIGO
INICIO 4. Mayor entre a, b y c
    a, b, c, max: REALES
    ESCRIBIR "Ingrese a: "
    LEER a
    max = a
    ESCRIBIR "Ingrese b (distinto de a): "
    LEER b
    SI b>max ENTONCES
        max = b
    FIN SI
    ESCRIBIR "Ingrese c (distinto de a y b): "
    LEER c
    SI c>max ENTONCES
        max = c
    FIN SI
    ESCRIBIR "El mayor entre a, b y c es: %f", max
FIN
*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, max;
    printf("Ingrese a: ");
    scanf("%f", &a);
    max=a;
    printf("Ingrese b (distinto de a): ");
    scanf("%f", &b);
    if(b>max){
        max = b;
    }
    printf("Ingrese c (distinto de a y b): ");
    scanf("%f", &c);
    if(c>max){
        max = c;
    }
    printf("El mayor entre a, b y c es: %f", max);
    return 0;
}
