void add_product(struct node st[TAM])
{
    short id;
    int cant;
    printf("Add products\n");
    printf("ID of product: ");
    scanf("%hd", &id);
    id--;
    if (id<0 || id>=TAM)
    {
        return;
    }
    printf("Amount available in stock: %d\nEnter the desired amount: ", st[id].stock);
    scanf("%d", &cant); 
    if(cant <= st[id].stock)
    {
        printf("%d %ss were added to the cart\n", cant, st[id].item);
        st[id].stock -= cant;
        st[id].cart += cant;
    }
    else{
        printf("There are not %d %ss in stock\n", cant, st[id].item);
    }
}