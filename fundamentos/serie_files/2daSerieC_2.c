/******************************************************************************
 - Nombre: Pancardo Botello Isaac
 - No. Cuenta: 423079803
 - Problema 2. Leer un archivo con 100 valores y escribir en archivos distintos 
 las medidas estadisticas solicitadas
 - Variables de entrada: 
	- nameIn (char): Nombre del archivo que contiene los valores a leer
	- datos (FILE): El archivo del que leeremos con los 100 valores
 - Variables de salida: 
	- moda (int): Guardara el valor de la moda a obtener
	- media, mediana (float): guardara el valor de las estadisticas a obtener que pueden tener decimales
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int convert(char numChar[]);
float calcularMedia(int arr[], int n);
float calcularMediana(int arr[], int n);
int calcularModa(int arr[], int n);
int main(){
    char nameIn[30], num[30];
    int valores[100], cnt, save, moda, i, j;
    float media, mediana;
    FILE *datos;
    printf("Ingrese el nombre del archivo a leer: ");
    scanf("%s", nameIn);
    datos = fopen(nameIn, "r");
    if(datos == NULL){
         // Si hay un error al abrir el archivo, fopen devuelve NULL
        fprintf(stderr, "Error al abrir el archivo\n");
        return 1;
    } // arch = NULL

    cnt = 0;
    printf("Valores leidos sin ordenar: \n");
    do{
        fscanf(datos, "%s", num);
        valores[cnt] = convert(num);
        printf("valor leido %d: %d\n", cnt+1, valores[cnt]);
        cnt++;
    }while(!feof(datos)); // leer datos
    
    printf("Valores leidos ordenados: \n");
    for(i=0; i<100; i++){
        for(j=99; j>i; j--){
            if(valores[j-1]>valores[j]){
                save = valores[j-1];
                valores[j-1] = valores[j];
                valores[j] = save;
            }
        }
        printf("valor ordenado %d: %d\n", i+1, valores[i]);
    } // ordenar valores

    media = calcularMedia(valores, 100);
    mediana = calcularMediana(valores, 100);
    moda = calcularModa(valores, 100);
    printf("media = %.0f\n", media);
    printf("mediana = %.0f\n", mediana);
    printf("moda = %d\n", moda);    
    fclose(datos);
    return 0;
}//main

int convert(char numChar[]){
    int x, pot10, num, digASCII;
    x = strlen(numChar);
    num = 0;
    pot10 = 1;
    for(int i=x-1; i>=0; i--){
        digASCII = 48; //Posicion del 0 en ASCII
        while(numChar[i] != digASCII){
            digASCII++;
        }
        num += pot10*(digASCII-48);
        pot10*=10;
    }
    return num;
} // convertir

float calcularMedia(int arr[]){
    long long sum=0;
    float med;
    for(int i=0; i<100; i++){
        sum += arr[i];
    }
    med = sum/100.0;
    return med;
} // calcular media

float calcularMediana(int arr[], int n){
    float med;
    if(n%2==0){
        med = (arr[(n/2)-1] + arr[n/2])/2.0;   
    }else{
        med = arr[(n-1)/2];
    }
    return med;
} // calcular mediana
int calcularModa(int arr[], int n){
    int cont, rep, mod, max;
    cont = 0;
    max = 0;
    while(cont<n-1){
        rep = 1;
        while(arr[cont] == arr[cont+1]){
            rep++;
            cont++;
        }
        if(rep > max){
            mod = arr[cont];
            max = rep;
        }
        cont++;
    }
    return mod;
} // calcular moda