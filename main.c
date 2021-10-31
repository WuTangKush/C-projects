#include <stdio.h>
int main()
{
    //declare variables
    char option;
    float n1, n2, result;

    printf("0 \n");


    printf("Select operator: (+, -, *, /) \n");
    scanf("%c", &option);
    printf("Enter the first number: \n");
    scanf("%f", &n1);
    printf("Enter the second number: \n");
    scanf("%f", &n2);

    //conditional statement for evaluation
    if(option == '+')
    {
        result= n1 + n2;
        printf("%f", result);
    }
    else if(option == '-')
    {
        result= n1 - n2;
        printf("%f", result);
    }
    else if(option == '*')
    {
        result= n1 * n2;
        printf("%f", result);
    }
    else if(option == '/')
    {
        if(n2 == 0)
        {
            printf("\n Divisor cannot be Zero...Enter another value.. ");
            scanf("%f", n2);
        }
        result = n1 / n2;
        printf("%f", result);
    }
    else
    {
        printf("You have entered wrong inputs");
    }
    return 0;
}
