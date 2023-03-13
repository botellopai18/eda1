enum boolean load_products(struct node st[TAM])
{
    FILE *data;
    data = fopen("db.txt", "r");
    if(data==NULL){
        return false;
    }
    for(int i=0; i<TAM; i++) {
        fscanf(data, "%s %f %d", st[i].product, &st[i].price, &st[i].stock);
    }
    fclose(data);
    return true;
}