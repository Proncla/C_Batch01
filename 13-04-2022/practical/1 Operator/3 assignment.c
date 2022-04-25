#include<stdio.h>
/*

Assignment 	(=, +=, -=, *=, /=, %=)

*/


int main()
{
    int Apple=15;
    int mango=20;


    printf("%i = %i\n",            Apple, mango);
    printf("%s %d\n","+=",       Apple += mango);
    printf("%s %d\n","-=",       Apple -= mango);
    printf("%s %d\n","*=",       Apple *= mango);
    printf("%s %d\n","/=",     Apple /= mango);
    printf("%s %d\n","%=",       Apple %= mango);
    printf("%s %d\n","=",        Apple = mango);

    printf("%d %d",Apple,mango);


    /// Apple = 15, mango = 20

    ///35    = 15    + 20
    ///Apple = Apple + mango;


    ///Apple += mango;

    ///Year = 1 + Year;
    ///Year += 1;
    ///Year++
    ///++Year

    scanf("%d");
    return 0;
}
