#include "options.c"
#include "delete_product.c"
#include "show_products.c"
#include "add_product.c"
#include "show_cart.c"
#include "print_ticket.c"
#include "close_program.c"

void menu(struct node s[TAM])
{
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
                show_products(s);
                break;
            case 2: //Add products
                add_product(s);
                break;
            case 3: //Delete products
                delete_product(s);
                break;
            case 4: //Show cart
                show_cart(s);
                break;
            case 5: //Buy products (print ticket)
                print_ticket(s);
                break;
            case 6:
                if(close_program(s))
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