///     Calculator program by
///
///     design and copyright
///

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void add(float v1, float v2);
void sub(float v1, float v2);
void mult(float v1, float v2);
void dive(float v1, float v2);



int main()
{



    /// Greetings
    greeting();
    calc();

    return 0;
}

void calc()
{
    ///Declaration
    float v1,v2;
    char op;

    ///Initialization
    v1=v2=0;
    op=NULL;

    printf("\n\t\t\tCALCULATOR\n\n");

    printf("\n\t\t\t+\t-\t*\t/\n");

    scanf("\n\n\t%f %c %f", &v1, &op, &v2);


    switch(op)
    {
    case '+':
        add(v1,v2);
        break;

    case '-':
        sub(v1,v2);
        break;

    case '*':
        mult(v1,v2);
        break;

    case '/':
        dive(v1,v2);
        break;
    }

}

void add(float v1 ,float v2)
{
    system("cls");


    printf("\n------------------------------------------------------------------");
    printf("\n||--------------------------------------------------------------||");
    printf("\n||                                                              ||");
    printf("\n||\t\t\t%2.2f %c %2.2f %c %2.2f\t\t\t||", v1, '+', v2, '=',v1 + v2);
    printf("\n||                                                              ||");
    printf("\n||--------------------------------------------------------------||");
    printf("\n------------------------------------------------------------------");



    getch();
}

void sub(float v1 ,float v2)
{
    system("cls");

    printf("\n------------------------------------------------------------------");
    printf("\n||--------------------------------------------------------------||");
    printf("\n||                                                              ||");
    printf("\n||\t\t\t%2.2f %c %2.2f %c %2.2f\t\t\t||", v1, '-', v2, '=',v1 - v2);
    printf("\n||                                                              ||");
    printf("\n||--------------------------------------------------------------||");
    printf("\n------------------------------------------------------------------");


    getch();
}
void mult(float v1 ,float v2)
{
    system("cls");

    printf("\n------------------------------------------------------------------");
    printf("\n||--------------------------------------------------------------||");
    printf("\n||                                                              ||");
    printf("\n||\t\t\t%2.2f %c %2.2f %c %2.2f\t\t\t||", v1, '*', v2, '=',v1 * v2);
    printf("\n||                                                              ||");
    printf("\n||--------------------------------------------------------------||");
    printf("\n------------------------------------------------------------------");
    getch();
}

void dive(float v1 ,float v2)
{
    system("cls");

    printf("\n------------------------------------------------------------------");
    printf("\n||--------------------------------------------------------------||");
    printf("\n||                                                              ||");
    printf("\n||\t\t\t%2.2f %c %2.2f %c %2.2f\t\t\t||", v1, '/', v2, '=',v1 / v2);
    printf("\n||                                                              ||");
    printf("\n||--------------------------------------------------------------||");
    printf("\n------------------------------------------------------------------");

    getch();
}


void greeting()
{
    char Get=NULL;
    printf("\n**************************************");
    printf("\n--------------------------------------");
    printf("\n\t\tWelcome");
    printf("\n--------------------------------------");
    printf("\n**************************************\a");

    printf("\n Press G key to continue");

    Up:

    Get = getch();

    if(Get=='G'||Get=='g')
    {
        system("cls");
        return 0;
    }
    else
    {
        goto Up;
    }
}
