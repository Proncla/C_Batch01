#include<stdio.h>
#include<conio.h>

void main()
{
    char name1[50],name2[50],name3[50];
    printf("Enter your name");
    scanf("%s",&name1);
    scanf("%s",&name2);
    scanf("%s",&name3);

    printf("Hello %s %s %s",name1, name2, name3);

    getch();
}
