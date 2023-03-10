void delete_product(struct node st[TAM])
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
    printf("Amount to erase from the %d in the cart: ", st[id].cart);
    scanf("%d", &cant);
    if (st[id].cart >= cant)
    {
        st[id].cart -= cant;
        st[id].stock += cant;
        printf("There are %d %ss left in the cart\n", st[id].cart, st[id].item);
    }
    else
    {
         printf("There are not %d %ss in your cart\n", cant, st[id].item);
    }
}