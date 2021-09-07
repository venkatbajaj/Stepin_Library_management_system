
#ifdef __LMS_H
#define __LMS_H
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void create(void);
int displaycomplete();
int addbook();
void exit1(void);
int search();
int author();
int title();
int issue();
int stock();

struct                                                   
    {
        int bookid;
        char booktitle[200];
        char bookauthor[200];
        int stockavailable;
    }book;
struct
{
    int id;
    char Student_name[100];
}student;
FILE *fp;                                               

#endif
