void add_product()
{
    short id;
    int cant;
    printf("ID of product: ");
    scanf("%hd", &id);
    if (id<0 || id>=TAM)
    {
        return;
    }
    printf("Amount available in stock: %d\nEnter the desired amount: ", numbers[0][id]);
    scanf("%d", &cant);
    if(cant<=numbers[0][id])
    {
        printf("%d %ss were added to the cart\n", cant, product[id]);
        numbers[0][id] -= cant;
        numbers[1][id] += cant;
    }
    else{
        printf("There are not %d %ss in stock\n", cant, product[id]);
    }
}