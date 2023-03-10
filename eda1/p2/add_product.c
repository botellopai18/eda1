void add_product(int *n, char *prod[], int *e)
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
    printf("Amount available in stock: %d\nEnter the desired amount: ", *(n+id));
    scanf("%d", &cant); 
    if(cant<=*(n+id))
    {
        printf("%d %ss were added to the cart\n", cant, *(prod+id));
        *(n+id) -= cant;
        *(n+TAM+id) += cant;
        *e += cant;
    }
    else{
        printf("There are not %d %ss in stock\n", cant, *(prod+id));
    }
}