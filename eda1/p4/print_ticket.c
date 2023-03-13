void print_ticket(struct node st[TAM], struct item **cart)
{
    FILE *ticket;
    printf("Print ticket \n");
    ticket = fopen("ticket.txt", "w");
    if(ticket == NULL){
        printf("Error al abrir el archivo\n");
        return;
    }
    struct item *it=*cart;
    if(it==NULL) {
        printf("The cart is empty\n");
        return;
    }
    int id;
    float total, subtotal;
    fprintf(ticket, "Show cart \n");
    fprintf(ticket, "%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Amount:", "Subtotal:");
    total=0;
    while(it!=NULL) {
        subtotal = st[id].price * it->cant;
        fprintf(ticket, "%12d%20s%15d%10s%.2f\n", it->id+1, st[id].product, it->cant, "$", subtotal);
        total += subtotal;
        it = it->next;
    }
    fprintf(ticket, "%57s%.2f\n", "TOTAL: $", total);   
    fclose(ticket);
}