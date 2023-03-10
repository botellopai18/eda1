#include "variables.c"
#include "welcome.c"
#include "delete_product.c"
#include "show_products.c"
#include "add_product.c"
#include "show_cart.c"
#include "print_ticket.c"
#include "close_program.c"
void menu()
{
    short op;
    welcome();
    while (2)
    {
        scanf("%hd", &op);
        switch(op)
        {
            case 1: //Show products
                printf("Show products\n");
                show_products();
                break;
            case 2: //Add products
                printf("Add products\n");
                add_product();
                break;
            case 3: //Delete products
                printf("Delete products\n");
                delete_product();
                break;
            case 4: //Show cart
                printf("Show cart \n");
                show_cart();
                break;
            case 5: //Buy products (print ticket)
                printf("Print ticket \n");
                print_ticket();
                break;
            case 6:
                if(close_program()==1)
                {
                    return;
                }
                break;
            default:
                printf("No option \n");
                break;
        }
    }
}