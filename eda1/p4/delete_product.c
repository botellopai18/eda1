void delete_product(struct node st[TAM], struct item **cart)
{
    printf("Delete products\n");
    if(*cart==NULL) {
        printf("Cart is empty\n");
        return;
    }
    else {
        short id;
        int cant;
        printf("ID of product: ");
        scanf("%hd", &id);
        id--;
        if (id<0 || id>=TAM) {
            return;
        }
        struct item *tmp = search(*cart, id);
        struct item *prev = search(*cart, id);
        while (tmp!=NULL) {
            if(id != tmp->id) {
                break;
            }
            prev = tmp;
            tmp = tmp->next;
        }
        if(tmp==NULL) {
            printf("ID is not in the cart\n");
            return;
        } else {
            printf("Amount to erase from the %d in the cart: ", tmp->cant);
            scanf("%d", &cant);
            if(tmp->cant > cant) {
                tmp->cant = tmp->cant - cant;
                st[id].stock += cant;
            } else if (tmp->cant == cant) {
                prev->next = tmp->next;
                tmp->next = NULL;
                free(tmp);
            } else {
                printf("There are not enough products in the cart\n");
            }
        }
    }
}