#include"lms.h"

int addbook()
{
int Found=0;
    fp=fopen("Books.txt","a+");
    printf("Book_id:\n");
    scanf("%d",&book.bookid);

    printf("Book_Title:\n");
    scanf("%s",book.booktitle);

    printf("Book_Author:\n");
    scanf("%s",book.bookauthor);

    printf("Book_stock:\n");
    scanf("%d",&book.stockavailable);

    fprintf(fp,"\n%d           \t%s           \t%s         \t%d",book.bookid,book.booktitle,book.bookauthor,book.stockavailable);
    fclose(fp);
    Found++;
    return Found;
}

int display()
{
    int Found=0;
    char info[500];
    fp=fopen("Books.txt","a+");                       

    printf("\nBookid\tBookTitle\tBookAuthor\tStockAvailable\n",info);
    do
    {
        fgets(info,500,fp);                                 
        printf("%s\n",info);
    }
    while(!feof(fp));                                       
    fclose(fp);  
    Found++;
    return Found;
}
