#include <stdio.h>

int sum(int input1, int input2)
{
    return input1+input2;
}

int main() {

    int number1,number2;

    printf("Please give two numbers to sum:\n");
    scanf("%d%d",&number1,&number2);
    printf("Sum of two numbers are:%d",sum(number1,number2));
    return 0;
}
