/******************************************************************************
 - Nombre: Pancardo Botello Isaac
 - No. Cuenta: 423079803
 - Problema 5. Leer un archivo binario de cuentas de alumnos y encontras la posicion
 en bytes en las que esta mi numero de cuenta
 - Variables de entrada: 
	- FILE(arch): Sera el apuntador del archivo binario a leer
	- mine(int): almacenara el numero de cuenta a buscar
 - Variables de salida: 
	- posF (int): almacenara el tamaño en bytes del archivo
	- cta (int): almacenara las cuentas leidas del archivo
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    int pos=0, posF, mine, cta, cont;
    char c[10];
    arch=fopen("cuentas.bin","rb");
    if (arch==NULL)
        exit(1);
    fseek(arch,0,SEEK_END);
    posF=ftell(arch);
    printf("Ingresar el numero de cuenta a buscar: ");
    scanf("%d", &mine);
    fseek(arch,0,SEEK_SET);
    cont = 0;
    fread(&cta, sizeof(int), 1, arch);
    fread(&cta, sizeof(int), 1, arch);
    fseek(arch,0,SEEK_SET);
    mine = 423079803;
    while(!feof(arch)){
        pos = ftell(arch);
        cta=0;
        fread(&cta, sizeof(int), 1, arch);
        fread(&cta, sizeof(int), 1, arch);
        if(mine == cta){
            printf("%i\n", pos);
            cont += 1;
        }
    }
    printf("Numero de cuentas encontradas: %i\n", cont);
    printf("El tamaño del archivo \"cuentas.bin\" es de %i bytes\n",posF);
    fclose(arch);
    return 0;
}