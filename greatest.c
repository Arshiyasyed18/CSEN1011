// To find the greatest of 3 numbers.
#include <stdio.h>

int main()
{
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    

    if(num1 > num2)
    {
        if(num1 > num3)
        {
           printf("Maximum number is%d",num1);
        }
        else
        {
           printf("Maximum number is%d",num3);
        }
    }
    else
    {
        if(num2 > num3)
        {
           printf("Maximum number is%d",num2);
        }
        else
        {
            printf("Maximum number is%d",num3);
        }
    }
    return 0;
}
