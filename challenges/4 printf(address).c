#include<stdio.h>

int main()
{
    int kargo = 67;

    int * ptr= &kargo;

    printf("%u\n", &kargo);
    printf("%u\n",ptr);
    printf("%d\n",kargo);
    printf("%d\n",*ptr);


    return 0;
}
