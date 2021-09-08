#include"lms.h"
#include"struct.c"

int search(void)
{
    int a,c;
    printf("\n\nSearch from below options:\n\n");
    printf("1-Author\n2-Title\n");
    printf("Option:");
    scanf("%d",&a);
    switch(a)
    {
    case 1:author();
        system("cls");

        printf("Press 0 to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();
        break;


    case 2:title();
        system("cls");

        printf("Press 0 to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();
        break;

    default:

        printf("Please enter a valid input\n");
        printf("\nPress 0 to main menu or Press 1 to exit\n\n");

        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();

    }

}

int title()
{
    int i;
    char Target[25];
    int Found=0;
    if((fp=fopen("Books.txt","r"))==NULL)                   
        printf(" ! The File is Empty....\n\n");
    else
    {
        printf("\nEnter The Name Of Book : ");
        scanf("%s",Target);

        while(!feof(fp)&& Found==0)
        {

            fscanf(fp,"%d %s %s %d ", &book.bookid,book.booktitle,book.bookauthor,&book.stockavailable);

            if(strcmp(Target,book.booktitle)==0)
             Found=1;

        }
        system("cls");
        if(Found)
            printf("\n\nYes the book is available\n\n");                    
            printf("\n\n! There is no such Entry....\n\n");
        fclose(fp);                                                          
    }
return Found;
}

int author()
{
    int i;
    char Target[500];
    int Found=0;

    if((fp=fopen("Books.txt","r"))==NULL)                              
    printf(" ! The file is empty....\n\n");
    else
    {
        printf("\nEnter The Name Of Author : ");
        scanf("%s",Target);
        printf("\nBooks:");
        while(!feof(fp))                                                     
        {
            fscanf(fp,"%d %s %s %d",&book.bookid,book.booktitle,book.bookauthor,&book.stockavailable);
            
            if(strcmp(Target,book.bookauthor)==0)                           
                Found=1;
        }
        if(!Found)
        {
        system("cls");
        printf("\n\n ! There is no such Entry....\n\n");
        fclose(fp);
        }
        else
        {
        system("cls");
        printf("\n%d %s %s %d\n",&book.bookid,book.booktitle,book.bookauthor,&book.stockavailable); 
        }
    }
    return Found;
}
