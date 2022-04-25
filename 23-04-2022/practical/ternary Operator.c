#include<stdio.h>
#include"fun.c"

int main(void)
{
    int v1, v2;
    v1 = 0;
    v2 = 0;

///  condition    true           false
    (v1 > v2   ?  putchar('1') : putchar('2'));

    return 0;
}
