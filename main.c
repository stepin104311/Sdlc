#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int squareroot(int a);
float reciprocal(int a);
int power(int a,int b);
float exponential(int a);
int main()
{
    int choice,a,b;
    printf("\nEnter Choice");
    printf("\n 1.Root\n 2.Reciprocal\n 3.Power\n 4.Exponential");
    scanf("\n %d",&choice);
    printf("Enter number : ");
    scanf("%d",&a);

    switch(choice)
    {
    case 1:
        printf("root value = %d",squareroot(a));
        break;

    case 2:
        printf("reverse value = %f",reciprocal(a));
        break;

    case 3:
        printf("power : ");
        scanf("%d",&b);
        printf("power value = %d",power(a,b));
        break;
    case 4:
        printf("exponential value = %f",exp(a));
    }

    return 0;
}
