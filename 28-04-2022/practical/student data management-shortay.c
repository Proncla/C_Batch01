#include<stdio.h>

int main()
{
    float s1,s2,s3;  ///  use to store decimal point value
    char sc1[10],sc2[10],sc3[10];

    printf("Fill up required student data\n");

    printf("\n%-10s","name\t");
    scanf("%s",&sc1);
    printf("%-10s","percentage\t");
    scanf("%f",&s1);


    printf("\n%-10s","name\t");
    scanf("%s",&sc2);
    printf("%-10s","percentage\t");
    scanf("%f",&s2);

    printf("\n%-10s","name\t");
    scanf("%s",&sc3);
    printf("%-10s","percentage\t");
    scanf("%f",&s3);

    printf("==========++++++++++==========++++++++++===========++++==-=-=--=");
    printf("\n\n\n");
    printf("%-10s %-10s\n","name", "percentage");
    printf("%-10s %-2.2f\n",sc1,s1);
    printf("%-10s %-2.2f\n",sc2,s2);
    printf("%-10s %-2.2f\n",sc3,s3);
    printf("==========++++++++++==========++++++++++===========++++==-=-=--=");

    return 0;
}
