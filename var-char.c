//
// Created by cyg on 2021/11/5.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct myStruct {
    int length;
    char a;
    char b;
    char c;
    char d;
    char e;
    char array[0];
} st,*pst;

int main(int argc,char *argvp[] )
{
    printf("myStruct:%lu\n", sizeof(st));
    printf("char:%lu\n", sizeof(char));
    printf("int:%lu\n", sizeof(int));
    printf("u_int64_t:%lu\n", sizeof(u_int64_t));

    char c1[] = "I am short string test!";
    char c2[] = "I am long string test!";

    pst p = (pst)malloc(sizeof(st) + strlen(c1) + 1);
    if (NULL != p)
    {
        p->length = 10;
        p->a = 'A';
        p->b = 'B';
        p->c = 'C';
        strcpy(p->array,c1);
    }

    printf("p address:%p\n", &p);
    printf("p->length:%d\n", p->length);
    printf("p->array:%s\n", p->array);

    printf("myStruct:%lu\n\n", sizeof(p));

    pst p2 = (pst)malloc(sizeof(st) + strlen(c2) + 1);
    if (NULL != p)
    {
        p2->length = 11;
        strcpy(p2->array,c2);
    }

    printf("p2 address:%p\n", &p2);
    printf("p2->length add:%p\n", &p2->length);
    printf("p2->array add:%p\n", &p2->array);
    printf("p2->length:%d\n", p2->length);
    printf("p2->array:%s\n", p2->array);

    free(p);
    free(p2);

//    system("pause");
    return 0;
}
