#include<stdio.h>
int main()
{
    int a,b,c;
    int op;
    printf("type 1 for finding the largest among all.\n");
    printf("type 0 for finding the smallest among all.\n");
    scanf("%d",&op);


    switch(op)
    {


    case 1:
    printf("enter the value of three numbers :");
    scanf("%d%d%d",&a,&b,&c);
     
    if(a>b && a>c)
    {
        printf("%d is the largest among all.",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the largest among all.",b);
    }
    else
    {
        printf("%d is the largest among all.",c);
    }
    break;



    case 0:
    printf("enter the value of three numbers :");
    scanf("%d%d%d",&a,&b,&c);
     
    if(a<b && a<c)
    {
        printf("%d is the smallest among all.",a);
    }
    else if(b<a && b<c)
    {
        printf("%d is the smallest among all.",b);
    }
    else
    {
        printf("%d is the smallest among all.",c);
    }
    break;
    
    default:
    printf("enter a valid input..");
    break;
    
    }

return 0;
}