#include<stdio.h>

void main ()
{
    Up:

    switch(getch())
    {
        case '1':
        printf("Old is Gold\n");
        break;

        case '2':
        printf("Mambo\n");
        break;

        case '0':
        printf("Old is Gold\n");
        printf("Mambo\n");
        break;

        case 'z':
        return;
        break;
    }

    goto Up;

}
