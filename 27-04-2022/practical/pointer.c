#include<stdio.h>

int main()
{
    int kargo = 67;

    int * ptr = &kargo;

    printf("%u\n", &kargo);
    printf("%u\n",ptr);
    printf("%u\n",kargo);
    printf("%u\n",*ptr);
    printf("%x\n",&kargo);

    printf("%u\n",ptr);

    printf("%u\n",*ptr);
    printf("%u\n",&ptr);
    printf("%u\n",&(*ptr));
    printf("%u\n",&(*(&(*ptr))));
    /*
    address     104

    point to    67

    address     104

    point to    67




    */
    ///printf("%u\n",&(*(&(*ptr))));

    //%x  ==  Hexa decimal(0-1-a-f)



    return 0;
}
