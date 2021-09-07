
#ifdef __LMS_H
#define __LMS_H
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


void create(void);
void operations(void);
void displaycomplete(void);
void addbook(void);
void exit1(void);
void search(void);
void author(void);
void title(void);
void issue(void);
void stock(void);


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