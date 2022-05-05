
#include<stdio.h>


int main()
{



    for (int i = 0 ;i< 5;i++)
    {
        for(int o=0;o<i;o++)
        {
            printf("* ");
        }
        printf("\n\n");
    }



    printf("\n------------------------\n");

    for (int i = 5 ;i> 0;i--)
    {
        for(int o=i;o>0;o--)
        {
            printf("* ");
        }
        printf("\n\n");
    }



    printf("\n-----------\a-------------\n");

    for (int i = 5 ;i> 0;i--)
    {
        for(int o=i;o>0;o--)
        {
            printf("* ");
        }
        printf("\n\n");
    }
q

    return 0;
}
