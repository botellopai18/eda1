/******************************************************************************
Nombre: Pancardo Botello Isaac
Fecha: 04 / 12 / 2022
Serie C Segundo Parcial
Ejercicio 3. Calcular sin(x)

PSEUDOCODIGO
INICIO 3. Calcular sin(x)
    x, sinC, e, potX, v: REALES
    i, fact, signo: ENTEROS
    ESCRIBIR "Ingresar x en radianes con x entre 0 y 20: "
    LEER x
    ESCRIBIR "Ingresar el error residual: "
    LEER e
    sinC = 0
    i = 0
    fact = 1
    potX = x
    signo = 1
    MIENTRAS QUE signo!=0 HACER
        v = potX/fact
        sinC = sinc + signo*v
        SI v>=e ENTONCES
            i = i+1
            potX = potX*x*x
            fact = fact*(2*i)*(2*i+1)
            signo = -signo
        FIN SI
        DE LO CONTRARIO
            signo = 0;
        FIN DE LO CONTRARIO
    FIN MIENTRAS
    ESCRIBIR "Valor de sin(x) en C: ", sin(x)
    ESCRIBIR "Valor de sin(x) calculado: ", sinC
    ESCRIBIR "Numero de iteraciones: ", i
FIN
*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    double x, sinC=0, e, potX, v;
    long long i=0, fact, signo;
    printf("Ingresar x en radianes con x entre 0 y 20: ");
    scanf("%lf", &x);
    printf("Ingresar el error residual: ");
    scanf("%lf", &e);
    potX = x;
    fact = 1;
    signo = 1;
    while(signo!=0){
        v = potX/fact;
        sinC += signo*v;
        if(v >= e){
            i++;
            potX *= x*x;
            fact *= (2*i)*(2*i+1);
            signo *= -1;
        }else{
            signo = 0;
        }
    }
    printf("Valor de sin(%.2lf) en C: %lf\n", x, sin(x));
    printf("Valor de sin(%.2lf) calculado: %lf\n", x, sinC);
    printf("Numero de iteraciones: %lld\n", i);
    return 0;
}
