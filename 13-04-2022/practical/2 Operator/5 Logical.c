#include<stdio.h>

///logical	   	(&&, ||, !)

int main()
{
    int age = 15,Age = 42;


    if(Age == age && Age != age)
    {
        printf("1true");
    }

    if(Age != age || Age == age)
    {
        printf("2true\n");

    }

    if(!(Age > age))
    {
        printf("3true\n");

    }
}
