/******************************************************************************
 - Nombre: Pancardo Botello Isaac
 - No. Cuenta: 423079803
 - Problema 4. Encontrar los numeros primos entre el 2 y 999 utilizando el metodo del cedazo
 de Aristotenes
 - Variables de entrada: 
        - n[1000] (int): el arreglo que contenia los unos y ceros
 - Variables de salida: 
        - arch (FILE): el documento de texto en el que se escribieron los primos
        encontrados
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[1000], cnt, i, j;
    FILE *arch;
    for(i=0; i<1000; i++){
        n[i] = 1;
    }
    n[0] = 0;
    n[1] = 0;
    for(j=2; j<1000; j++){
        if(n[j] == 1){
            cnt = 2;
            while(j*cnt<1000){
                n[j*cnt] = 0;
                cnt++;
            }
        }
    }
    arch = fopen("primos.txt", "w");
    if(arch == NULL){
        printf("No se pudo abrir el archivo");
        exit(1);
    }

    for(i=0; i<1000; i++){
        if(n[i] == 1){
            fprintf(arch, "%d\n", i);
        }
    }
    printf("Los primos entre el 2 y 999 fueron impresos en 'primos.txt'");
    fclose(arch);
}