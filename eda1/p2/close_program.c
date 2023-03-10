int close_program(int *e)
{
    short cont;
    printf("Close program\n");
    if(*e)
    {
        printf("There are still products in your cart. Do you still want to leave? \n");
        printf("Press 1 to exit, 2 to keep chopping\n");
        scanf("%hd", &cont);
        return cont-1;
    }
    return 0;
}