#include"lms.h"
#include"struct.c"

int create()
{
    int i,c,n;
    int Found=0;
    printf("\n\nPlease enter the number of books you want to enter in your database\n\n");
    printf("No.:");
    scanf("%d",&n);
    FILE *fp;
    struct                                                 
    {
        int bookid;
        char booktitle[200];
        char bookauthor[200];
        int stockavailable;
    }book[n];

     fp= fopen("Books.txt","w");                     // if u create a new data base old data base will be deleted
    printf("\n\nEnter the details of the books\n\n");


    printf("Bookid  Booktitle  bookauthor  stockavailable\n");

    for(i=0;i<n;i++)
    {
        fscanf(stdin,"%d           \t%s           \t%s        \t%d",&book[i].bookid,&book[i].booktitle,&book[i].bookauthor,&book[i].stockavailable);
        fprintf(fp,"\n%d           \t%s           \t%s         \t%d",book[i].bookid,book[i].booktitle,book[i].bookauthor,book[i].stockavailable);

    }
    

    fclose(fp);                                                               
    fprintf(stdout,"\n\n");
    system("cls");
    Found++;

    printf("\n\nThanks , Your Data Has Been Stored\n");

    printf("\nPress 0 to go back to main menu or Press 1 to exit after input\n");

    scanf("%d",&c);

    if(c==0)
        main();
    else
        exit1();
return Found;
}
