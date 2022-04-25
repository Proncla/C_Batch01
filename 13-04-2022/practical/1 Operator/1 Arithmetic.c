#include<stdio.h>
/// Arithmetic operator Ex

int main()
{
    int mambo = 65;
    int apple = 15;

    printf("+ \t%4d\n",apple + mambo);
    printf("- \t%4d\n",apple - mambo);
    printf("* \t%4d\n",apple * mambo);
    printf("/ \t%4d\n",apple / mambo);
    printf("%c\t%4d\n", '%', apple % mambo);

    return 0;
}
