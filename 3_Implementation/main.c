#include"lms.h"


int main(void)
{
    printf("\n\n\n\n                 Welcome To Library Management Software System\n\n");

    printf("Press any key to continue and then press enter\n");
    char ch=getchar();
    if(ch=='1')
    {
        exit1();
    }
    else
    {
    system("cls");
    FILE *fp;
    int a,c;
    printf("\nWelcome to operations section\n");
    printf("\nSelect a particular operation and enter it's Number\n\n");
    printf("1-create database\n");
    printf("2-Add a new book\n");
    printf("3-Search a particular book\n");
    printf("4-Check the stock available\n");
    printf("5-Display the complete database\n");
    printf("6-issue Book\n");
    printf("\nnumber:\n");
    scanf("%d",&a);
    switch(a)
    {
        case 2:addbook();
        system("cls");

        printf("\n\nThe new book has been added\n\n");
        printf("Press 0 to main menu or press 1 to exit\n\n");
        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();
        break;

        case 3:search();

        break;


        case 4:stock();
        system("cls");

        printf("\n\nPress 0 to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();
        break;


        case 5:
        system("cls");
        display();
        printf("\nThe display is complete\n");
        printf("\nPress 0 to main menu or press 1 to exit\n\n");
        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();
        break;
        
        case 1:
        system("cls");
        printf("\n this wll delete the previous data and create a new data base\n press 0 to continue 1 to exit\n");
        scanf("%d",&c);
        if(c==0)
            create();
        else
            exit1();
        printf("\n\nPress 0 to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();
        break;
        
        case 6:issue();
        system("cls");

        printf("\n\nPress 0 to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();
        break;
        
        default:

        printf("Please enter a valid input\n");
        printf("\nPress 0 to main menu or Press 1 to exit after input\n\n");

        scanf("%d",&c);

        if(c==0)
            main();
        else
            exit1();
    }
    }
    return 0;
}

void exit1(void)
{
    printf("\n\n\t\t\t\t\t Thank You !!\n\t\t\t\t\t Come Again !!\n");
}
