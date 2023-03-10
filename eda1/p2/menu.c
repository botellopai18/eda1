#define TAM 5
#define MAX 30
#include "options.c"
#include "delete_product.c"
#include "show_products.c"
#include "add_product.c"
#include "show_cart.c"
#include "print_ticket.c"
#include "close_program.c"

void menu()
{
    #include "data.c"
    short op;
    printf("Welcome to Expensive Hodies!!\n");
    options();
    while (2)
    {
        scanf("%hd", &op);
        switch(op)
        {
            case 0:
                options();
                break;
            case 1: //Show products
                show_products(&numbers[0][0], product, price);
                break;
            case 2: //Add products
                add_product(&numbers[0][0], product, &not_empty);
                break;
            case 3: //Delete products
                delete_product(&numbers[0][0], product, &not_empty);
                break;
            case 4: //Show cart
                show_cart(&numbers[0][0], product, price, &not_empty);
                break;
            case 5: //Buy products (print ticket)
                print_ticket(&numbers[0][0], product, price, &not_empty);
                break;
            case 6:
                if(close_program(&not_empty))
                {
                    break;
                }
                return;
            default:
                printf("No option \n");
                break;
        }
        
    }
}