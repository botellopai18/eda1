void delete_product()
{
    short id;
    int cant;
    printf("ID of product: ");
    scanf("%hd", &id);
    if (id<0 || id>=TAM)
    {
        return;
    }
    printf("Amount to erase from the %d in the cart: ", numbers[1][id]);
    scanf("%d", &cant);
    if (numbers[1][id] >= cant)
    {
        numbers[1][id] -= cant;
        numbers[0][id] += cant;
        printf("There are %d %ss left in the cart\n", numbers[1][id], product[id]);
    }
    else
    {
         printf("There are not %d %ss in your cart\n", cant, product[id]);
    }
}