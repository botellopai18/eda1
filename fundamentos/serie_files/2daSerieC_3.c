/******************************************************************************
 - Nombre: Pancardo Botello Isaac
 - No. Cuenta: 423079803
 - Problema 3. Hacer un programa que reciba los comandos de movimiento para simular los movimientos de 
 una tortuga en un tablero
 - Variables de entrada: 
	- c (int): almacenara el comando que vaya solicitando el usuario
	- p (int): almacenara la cantidad de pasos que avanzara la tortuga cuando se ingrese el comando 5
 - Variables de salida: 
	- arch (FILE): representara el archivo del tablero final despues de realizar los comandos sugeridos
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int piso[50][50];
    int pos[2], pluma, dir, sent, p, c, i, j;
    char k;
    FILE *arch;
    for(i=0; i<50; i++){
        for(j=0; j<50; j++){
            piso[i][j] = 0;
        }
    }
    c = 0;
    pluma = 0; // 0 arriba, 1 abajo
    dir = 0; // 0 derecha, 1 abajo, 2 izq, 3 arriba
    sent = 1; // 1 derecha o abajo, -1 arriba o izq
    pos[0] = 0; //columna actual
    pos[1] = 0; //fila actual
    printf("Ingrese uno a uno, alguno de los siguientes comandos: \n");
    printf("1. Pluma arriba\n");
    printf("2. Pluma abajo\n");
    printf("3. Vuelta a la derecha\n");
    printf("4. Vuelta a la izquierda\n");
    printf("5, pasos. La tortuga avanzara los pasos indicados\n");
    printf("6. Despliega el tablero de 50 por 50 en pantalla\n");
    printf("9. Fin de datos e impresion del tablero a un archivo de texto\n");

    while(c!=9){
        printf("Ingrese un comando: ");
        scanf("%d%c", &c, &k);
        switch(c){
            case 1:
                pluma = 0;
                break;
            case 2:
                pluma = 1;
                break;
            case 3:
                dir = (dir+1)%4;
                if(dir>=2){sent = -1;}
                else{sent = 1;}
                break;
            case 4:
                dir = (dir+3)%4;
                if(dir>=2){sent = -1;}
                else{sent = 1;}
                break;
            case 5:
                scanf(" %d", &p);
                for(i=0; i<p; i++){
                    pos[dir%2] += sent;
                    piso[pos[1]][pos[0]] += pluma;
                }
                break;
            case 6:
                for(i=0; i<50; i++){
                    for(j=0; j<50; j++){
                        if(piso[i][j] != 0){
                        printf("$");
                        }else{
                            printf("_");
                        }
                    }
                    printf("\n");
                }
                break;
            case 9:
                printf("Tablero impreso en el archivo\nFin del programa");
                arch = fopen("TableroFinal.txt", "w");
                if(arch == NULL){
                    printf("No se pudo crear el archivo\n");
                    exit(1);
                }
                for(i=0; i<50; i++){
                    for(j=0; j<50; j++){
                        if(piso[i][j] != 0){
                            fprintf(arch, "$");
                        }else{
                            fprintf(arch, "_");
                        }
                    }
                    fprintf(arch, "\n");
                }
            default:
                break;
        }
    }
    fclose(arch);
    return(0);
}