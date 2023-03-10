int close_program()
{
    int total_cart;
    short id;
    total_cart = 0;
    for(id=0; id<TAM; id++)
    {
        total_cart += numbers[1][id];
    }
    if (total_cart > 0)
    {
        printf("There are still products in your cart. Do you still want to leave? \n");
        printf("Press 1 to exit, 2 to keep chopping\n");
        scanf("%hd", &id);
        return id;
    }
    else
    {
        return 1;
    }
}