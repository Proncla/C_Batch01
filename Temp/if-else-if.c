#include<stdio.h>

int main()
{
    int pass = 0;




    for(;;)
    {

        scanf("%d",&pass);

        if (pass == 123)
        {
            printf("If 1 %d\n",pass);
        }
        else if(pass >= 125)
        {
            printf("If 2 %d\n",pass);
        }
        else if(pass <= 121)
        {
            printf("If 3 %d\n",pass);
        }
        else
        {
            printf("else 1 %d\n",pass);
        }

    }


    return 0;
}
