void show_products(int *n, char *prod[], float *pr)
{
    int id;
    printf("Show products\n");
    printf("%13s%20s%15s%15s\n", "Product ID:", "Decription:", "Available:", "Price:");
    for(id=0; id<TAM; id++)
    {
        printf("%12d%20s%15d%10s%.2f\n", id+1, *(prod+id), *(n+id), "$", *(pr+id));
    }
    
}