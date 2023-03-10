void print_ticket(struct node st[TAM])
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
    fprintf(ticket, "%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Amount:", "Subtotal:");
    total=0;
    for(id=0; id<TAM; id++)
    {
        if(st[id].cart > 0)
        {
            subtotal = st[id].price * st[id].cart;
            fprintf(ticket, "%12d%20s%15d%10s%.2f\n", id+1, st[id].item, st[id].cart, "$", subtotal);
            total += subtotal;
        }
    }
    fprintf(ticket, "%57s%.2f\n", "TOTAL: $", total);
    fclose(ticket);
}