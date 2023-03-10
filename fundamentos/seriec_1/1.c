/******************************************************************************
Nombre: Pancardo Botello Isaac
Fecha: 04 / 12 / 2022
Serie C Segundo Parcial
Ejercicio 1. Cuadrado de digitos

PSEUDOCODIGO
INICIO 1. Imprimir cuadrado de digitos
    
    n, r: ENTEROS
    r=1
    MIENTRAS QUE r==1 HACER
        ESCRIBIR "Ingrese el tamaño del cuadrado de digitos: "
        LEER n
        SI (n<0 || n>9) ENTONCES
            ESCRIBIR "Valor incorrecto. Ingrese un numero entero entre 0 y 9"
        FIN SI
        SI NO 
            r=0
        FIN SI NO
    FIN MIENTRAS
    PARA i=1 HASTA i<=n PASO i+1 HACER
        PARA j=1 HASTA j<=n PASO j+1 HACER
            ESCRIBIR j, " "
        FIN PARA
    FIN PARA
FIN
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, r=1;
    while(r==1){
        printf("Ingrese el tamaño del cuadrado de digitos: ");
        scanf("%d", &n);
        if(n<0 || n>9){
            printf("Valor incorrecto. Ingrese un número entero entre 0 y 9\n");
        }else{
            r=0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
