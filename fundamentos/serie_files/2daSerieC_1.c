/******************************************************************************
 - Nombre: Pancardo Botello Isaac
 - No. Cuenta: 423079803
 - Problema 1. Leer un archivo de una columna de numeros y escribir en otro archivo en forma de tabla el eemento, valor leido y su histograma
 - Variables de entrada: 
	- nameIn, nameOut (char): que son los nombres de los archivos a leer y a escribir
	- archR (FILE): El archivo del que leeremos con los numeros escritos en columna
 - Variables de salida: 
	- archW (FILE): El archivo en el que escribiremos los histogramas
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nameIn[30], nameOut[30], valChar[30];
    int cnt, num, val, pot10, i, j;
    FILE *archR, *archW;
    
    printf("Ingrese el nombre del archivo a leer: ");
    scanf("%s", nameIn);
    archR = fopen(nameIn, "r");
    if(archR == NULL){
         // Si hay un error al abrir el archivo, fopen devuelve NULL
        fprintf(stderr, "Error al abrir el archivo\n");
        return 1;
    }
    
    printf("Ingrese el nombre del archivo de salida: ");
    scanf("%s", nameOut);
    archW = fopen(nameOut, "w");
    if(archW==NULL)
	{
		printf("\n No se puede crear el archivo de salida.");
		exit(EXIT_FAILURE);
	}
	
	fprintf(archW, "Elemento  Valor  Histograma\n");
    cnt = 0;
    do{
        fscanf(archR, "%s", valChar);
        val = 0;
        pot10 = 1;
        for(i=strlen(valChar)-1; i>=0; i--){
            num = 48; // 48 es el valor en la tabla ASCII del 0
            while(valChar[i] != num){
                num++;
            }
            val += (num-48)*pot10;
            pot10 *= 10;
        }
        fprintf(archW, "%d%5d", cnt, val);
        for(j=0; j<val; j++){
            fprintf(archW, "*");
        }
        fprintf(archW, "\n");
        cnt++;
    }while(!feof(archR));
    printf("Se creo el archivo %s correctamente", nameOut);
    fclose(archR);
    fclose(archW);
    return 0;
}
