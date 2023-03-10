void show_cart(int *n, char *prod[], float *pr, int *e)
{
    int id;
    float total, subtotal;
    printf("Show cart \n");
    if(*e)
    {
        printf("%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Amount:", "Subtotal:");
        total=0;
        for(id=0; id<TAM; id++)
        {
            if(*(n+TAM+id)>0)
            {
                subtotal = (*(pr+id))*(*(n+TAM+id));
                printf("%12d%20s%15d%10s%.2f\n", id+1, *(prod+id), *(n+TAM+id), "$", subtotal);
                total += subtotal;
            }
        }
        printf("%57s%.2f\n", "TOTAL: $", total);
    }
    else
    {
        printf("There is not products in your cart\n");
    }
}   