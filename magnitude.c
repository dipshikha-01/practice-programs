/*a program comparing the magnitudes among two given numbers*/
#include<stdio.h>
int main()
{
    int a , b ;
    printf("enter the value of two numbers :");
    scanf("%d%d",&a , &b);

    if(a>b)
    {
        printf("%d is the largest",a);
    }
    else if(a==b)
    {
        printf("both are equal");
    }
    else if(a<b)
    {
        printf("%d is the largest",b);
    }
    else
    {
        printf("enter a valid input");
    }
    return 0;
}