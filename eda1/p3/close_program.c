int close_program(struct node st[TAM])
{
    int total=0;
    printf("Close program\n");
    for(int id=0; id<TAM; id++)
    {
        total += st[id].cart;
        if(total)
        {
            printf("Are you sure?. You still have some products in your cart\n");
            printf("Press 1 to leave, 2 to continue shopping \n");
            scanf("%d", &total);
            total--;
            break;
        }
    }
    return total;
}