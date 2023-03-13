int close_program(struct item **cart)
{
    short i=0;
    printf("Close program\n");
    if(cart!=NULL) {
        printf("There are still some products in your cart\n");
        printf("Are you sure to leave?\n");
        printf("Press 1 to exit, 2 to continue shopping\n");
        scanf("%hd", &i);
        i--;
    }
    return i;
}