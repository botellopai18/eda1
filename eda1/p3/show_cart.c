void show_cart(struct node st[TAM])
{
    int id;
    float total, subtotal;
    printf("Show cart \n");
    
    printf("%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Amount:", "Subtotal:");
    total=0;
    for(id=0; id<TAM; id++)
    {
        if(st[id].cart > 0)
        {
            subtotal = st[id].price * st[id].cart;
            printf("%12d%20s%15d%10s%.2f\n", id+1, st[id].item, st[id].cart, "$", subtotal);
            total += subtotal;
        }
    }
    printf("%57s%.2f\n", "TOTAL: $", total);
}   