#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define MAX 30
struct node
{
    char product[30];
    float price;
    int stock;
};
struct item{
    int id,cant;
    struct item *next;
};
enum boolean {false, true};
#include "load_products.c"
#include "menu.c"
int main()
{
    struct item *cart=NULL;
    struct node almacen[TAM];
    enum boolean res = load_products(almacen);
    if(res) {
        menu(almacen, &cart);
    } else {
        printf("There are not any products available\n");
    }
    return 0;
}
