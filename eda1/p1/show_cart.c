void show_cart()
{
    short id;
    float total;
    printf("%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Amount:", "Subtotal:");
    total=0;
    for(id=0; id<TAM; id++)
    {
        if(numbers[1][id]>0)
        {
            printf("%12hd%20s%15d%10s%.2f\n", id, product[id], numbers[1][id], "$", price[id]*numbers[1][id]);
            total += numbers[1][id]*price[id];
        }
    }
    printf("%57s%.2f\n", "TOTAL: $", total);
}