#include<stdio.h>

int add();


int main()
{
    int v1,v2,v3;
    v1=v2=v3=NULL;
    printf("Enter to values  to add ");
    scanf("%d %d",&v1,&v2);

    v3 = add(v1,v2);
    printf("%d",v3);

    return 0;
}


int add(int v1,int v2)
{
    return v1+v2;
}
