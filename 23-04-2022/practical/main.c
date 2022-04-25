#include<stdio.h>
#include"fun.c"

int main(void)
{
    int v1, v2,v3;

    scanf("%d",&v1);
    scanf("%d", &v2);
    v3 = cal_add(v1,v2);
    printf("%d", v3);

    return 0;
}
