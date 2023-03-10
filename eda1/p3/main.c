#include <stdio.h>
#define TAM 5
#define MAX 30
struct node
{
    char item[30];
    float price;
    int stock, cart;
};
enum boolean {false, true};
#include "stock/load_products.c"
#include "menu.c"
int main()
{
    struct node almacen[TAM];
    enum boolean res=load_products(almacen);
    if(res)
    {
        menu(almacen);
    }
    return 0;
}
