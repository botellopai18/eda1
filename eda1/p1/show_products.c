void show_products()
{
    short id;
    printf("%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Available:", "Price:");
    for(id=0; id<TAM; id++)
    {
        printf("%12hd%20s%15d%10s%.2f\n", id, product[id], numbers[0][id], "$", price[id]);
    }
}