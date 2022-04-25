#include<stdio.h>

void main()
{
    int a,b,c;
    a=b=c=0;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);


    ///Logic for greater then program
    if(a > b)
    {
        printf("A > B\n");
        if(a > c)
        {
            printf("A > C\n");
        }
    }
    else
    {
        if(b > c)
        {
            printf("B > C\n");
            if( b > a)
            {
                printf("B > A\n");
            }
        }
        else
        {
            if( c > a)
            {

                printf("C > A\n");
                if(c > b)
                {
                    printf("C > B\n");

                }
            }
        }
    }





















/*
    if(a > b)
    {
        printf("A > B\n\n");

        if(c > a)
        {
            printf("C > A\n\n");
        }
    }
    else
    {
        if(b > c)
        {
            printf("B > C\n\n");

            if(c > a)
            {
                printf("C > A\n\n");
            }
        }

        if(c > a)
        {
            printf("B > C\n\n");

            if(c > b)
            {
                printf("C > A\n\n");
            }
        }
    }
    */
}
