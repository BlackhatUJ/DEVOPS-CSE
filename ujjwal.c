#include<stdio.h>
int main()
{
    int a;
    printf("enter the number you want to check:");
    scanf("%d", &a);
    if (a%2==0)
    {
        /* code */printf("it is diivisible by 2\n");
    }
    else if (a%3==0 ) 
    {
        /* code */printf("it is divisible by 3\n");
    }
    else if (a%2==0 && a%3==0)

    {
        printf("it is divisible by both 2 and 3");
    }
    else
    {
        /* code */printf("it is neither divisible by 2 nor by 3 ");
    }
    
    return 0;
}
