/******************************************************************************
Nombre: Pancardo Botello Isaac
Fecha: 04 / 12 / 2022
Serie C Segundo Parcial
Ejercicio 2. Producto impares menores a los multiplos menores a 100 de n

PSEUDOCODIGO
INICIO 2. Producto impares menores a los multiplos menores a 100 de n
    n, r, imp, prod, sum: ENTEROS
    imp = 1
    r = 0
    prod = 1
    sum = 0
    ESCRIBIR "Ingrese el numero N: "
    LEER n
    ESCRIBIR "Multiplo  Producto impares"
    MIENTRAS QUE r+n<=100 HACER
        r = r+n
        MIENTRAS QUE imp+2<r HACER
            imp = imp+2
            prod = prod*imp
        FIN MIENTRAS
        ESCRIBIR "   ", r, "     ", prod
        sum = sum + prod
    FIN MIENTRAS
    ESCRIBIR "Suma de productos impares: ", sum
FIN
******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int n, r=0, imp=1;
    double prod=1, sum=0;
    printf("Ingrese el numero N: ");
    scanf("%d", &n);
    printf("Multiplo  Producto impares\n");
    while(r+n <= 100){
        r += n;
        while(imp+2<r){
            imp += 2;
            prod *= imp;
        }
        printf("%5d      %.0f\n", r, prod);
        sum += prod;
    }
    printf("Suma de productos impares: %.0f", sum);
    return 0;
}
