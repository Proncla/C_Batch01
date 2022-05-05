#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[7]="apple";

    char * change =&name[0];

    for(int i = 0; i<4;i++)
    {
        *change=NULL;
        change++;
    }


    *change = 'R';
    printf("%s\n",name);
}
