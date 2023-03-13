void add_product(struct node st[TAM], struct item **cart)
{
    short id;
    int cant;
    printf("Add products\n");
    printf("ID of product: ");
    scanf("%hd", &id);
    id--;
    if (id<0 || id>=TAM){
        return;
    }
    printf("Amount available in stock: %d\nEnter the desired amount: ", st[id].stock);
    scanf("%d", &cant); 
    if(cant <= st[id].stock)
    {
        if(cart==NULL) {
            struct item *it = (struct item *)malloc(sizeof(struct item));
            it->id=id;
            it->cant=cant;
            it->next=NULL;
            *cart=it;
        } 
        else {
            struct item *it = search(*cart, id);
            if(it!=NULL) {
                it->cant = it->cant + cant;
            }
            else {
                struct item *it2 = (struct item *)malloc(sizeof(struct item));
                it2->id=id;
                it2->cant=cant;
                it2->next=*cart;
                *cart=it2;
            }
        }
        st[id].stock -= cant;
        printf("%d %ss were added to the cart\n", cant, st[id].product);
    }
    else{
        printf("There are not %d %ss in stock\n", cant, st[id].product);
    }
}