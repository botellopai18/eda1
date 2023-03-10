void print_ticket()
{
    short id;
    float total;
    FILE *ticket;
    ticket = fopen("ticket.txt", "w");
    if(ticket == NULL){
        printf("Error al abrir el archivo\n");
        return;
    }
    fprintf(ticket, "%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Amount:", "Subtotal:");
    total=0;
    for(id=0; id<TAM; id++)
    {
        if(numbers[1][id]>0)
        {
            fprintf(ticket, "%12hd%20s%15d%10s%.2f\n", id, product[id], numbers[1][id], "$", price[id]*numbers[1][id]);
            total += numbers[1][id]*price[id]; //add to the total
            numbers[1][id] = 0; //to empty the cart
        }
    }
    fprintf(ticket, "%57s%.2f\n", "TOTAL: $", total);
    printf("Thanks for your shopping\n");
    fclose(ticket);
}