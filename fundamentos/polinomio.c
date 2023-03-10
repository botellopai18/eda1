/*
Nombre: Pancardo Botello Isaac
Fecha: 22 noviembre 2022
Problema: Polinomio
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Ingrese el grado del polinomio a evaluar: ");
    scanf("%d",&n);
    float c[n+1];
    for(int i=n; i>=0; i--){
        printf("Ingrese el coeficiente de x^%d: ", i);
        scanf("%f",&c[i]);
    }
    printf("P(x) = %.2f(x^%d) ", c[n], n);
    for(int i=n-1; i>=0; i--){
        if(c[i]!=0 && i!=0){
            printf("+ %.2f(x^%d) ", c[i], i);   
        }
        if(i==0 && c[0]!=0){
            printf("+ %.2f", c[0]);
        }
    }
    float x, fx=c[0], xi=1;
    printf("\nIngrese x para evaluarlo en P(x): ");
    scanf("%f", &x);
    for(int i=1; i<=n; i++){
        xi *= x;
        fx += xi*c[i];
    }
    printf("P(%.2f) = %.2f ", x, fx);
    return 0;
}
