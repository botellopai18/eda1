void print_ticket(int *n, char *prod[], float *pr, int *e)
{
    int id;
    float total, subtotal;
    FILE *ticket;
    printf("Print ticket \n");
    ticket = fopen("ticket.txt", "w");
    if(ticket == NULL){
        printf("Error al abrir el archivo\n");
        return;
    }
    if(*e)
    {
        fprintf(ticket, "%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Amount:", "Subtotal:");
        total=0;
        for(id=0; id<TAM; id++)
        {
            if(*(n+TAM+id)>0)
            {
                subtotal = (*(pr+id))*(*(n+TAM+id));
                fprintf(ticket, "%12d%20s%15d%10s%.2f\n", id+1, *(prod+id), *(n+TAM+id), "$", subtotal);
                total += subtotal;
                *(n+TAM+id) = 0;
            }
        }
        fprintf(ticket, "%57s%.2f\n", "TOTAL: $", total);
        printf("Thanks for your shopping\n");
        *e = 0;
    }
    else
    {
        printf("There is not products in your cart\n");
    }
    fclose(ticket);
}