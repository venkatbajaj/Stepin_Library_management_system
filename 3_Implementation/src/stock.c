#include"lms.h"

void stock()
{
    int i;
    char Target[500];
    int Found=0;

    if((fp=fopen("Books.txt","r"))==NULL)                             
    printf("\n\n ! The file is empty.... \n\n");
    else
    {
        printf("\nEnter The Name Of Book : ");
            scanf("%s",Target);
        while(!feof(fp))                                                    
        {
            fscanf(fp,"%d %s %s %d",&book.bookid,book.booktitle,book.bookauthor,&book.stockavailable);
            if(strcmp(Target,book.booktitle)==0)                            
            {
                Found=1;
            }

        }
        if(!Found)
        {
            system("cls");
            printf("\n\n ! There is no such Entry...\n\n");
            fclose(fp);                                                        
        }
         else
         {
            system("cls");
            printf("\n\n\tStock:%d\n\n",book.stockavailable); 
         }
    }
}
