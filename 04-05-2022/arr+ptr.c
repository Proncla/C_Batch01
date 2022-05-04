#include<stdio.h>
#include<stdlib.h>


int main()
{
    char name[7]="apple";


    char * change =&name;
    printf("%s\n",name);

    name[4]= 'r';
    printf("%s\n",name);
}
