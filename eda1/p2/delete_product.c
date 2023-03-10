void delete_product(int *n, char *prod[], int *e)
{
    short id;
    int cant;
    printf("Delete products\n");
    printf("ID of product: ");
    scanf("%hd", &id);
    id--;
    if (id<0 || id>=TAM)
    {
        return;
    }
    printf("Amount to erase from the %d in the cart: ", *(n+TAM+id));
    scanf("%d", &cant);
    if (*(n+TAM+id)>= cant)
    {
        *(n+TAM+id) -= cant;
        *(n+id) += cant;
        *e -= cant;
        printf("There are %d %ss left in the cart\n", *(n+TAM+id), *(prod+id));
    }
    else
    {
         printf("There are not %d %ss in your cart\n", cant, *(prod+id));
    }
}