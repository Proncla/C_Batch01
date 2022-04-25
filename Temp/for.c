#include<stdio.h>

int main()
{
    int pass = 0;
    int i = 15;
    int a = 1;

    char name[3] = 	"ARY";

   

    do
    {
        printf("%d %c %s\n",i, '=', name);

        i = i + 1;

    }while(i <= 20);
    return 0;
}
