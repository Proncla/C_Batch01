#include<stdio.h>
#define MAX 3

struct std
{
  char name[10];
  float perc;
}stds[MAX];

int main()
{
    /// dot operator used to access members of structure
    ///stds[1].name = "tiago";
    for(int i=0;i<MAX;i++)
    {
        printf("\nAdd new student entry : %d",i);
        printf("\n%-10s","name\t");
        scanf("%s",&stds[i].name);
        printf("%-10s","percentage\t");
        scanf("%f",&stds[i].perc);
    }
    system("cls");
    printf("\n==========++++++++++==========++++++++++===========++++==-=-=--=");
    printf("\n%-10s %-10s\n","name", "percentage");
    for(int i=0;i<MAX;i++)
    {
        printf("\n%-10s %-2.2f\n",stds[i].name, stds[i].perc);
    }
    printf("==========++++++++++==========++++++++++===========++++==-=-=--=");

    return 0;
}
