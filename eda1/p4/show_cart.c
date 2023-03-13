void show_cart(struct node st[TAM], struct item **cart) {
    struct item *it=*cart;
    if(it==NULL) {
        printf("The cart is empty\n");
        return;
    }
    int id;
    float total, subtotal;
    printf("Show cart \n");
    printf("%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Amount:", "Subtotal:");
    total=0;
    while(it!=NULL) {
        subtotal = st[id].price * it->cant;
        printf("%12d%20s%15d%10s%.2f\n", it->id+1, st[id].product, it->cant, "$", subtotal);
        total += subtotal;
        it = it->next;
    }
    printf("%57s%.2f\n", "TOTAL: $", total);
}   