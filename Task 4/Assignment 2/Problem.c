#include <stdio.h>
#include <stdlib.h>
typedef enum operations
{
  Add = 43,
  Sub = 45,
  Multiply = 42,
  Divide = 47,
  AND = 38,
  OR = 0x7C,
  NOT = 33,
}operator;

void calculate(int num1 , int num2 , char operator)
{
    switch (operator)
    {
    case '+':
        printf("%d + %d = %d" , num1 , num2 , num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d" , num1 , num2 , num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d" , num1 , num2 , num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d" , num1 , num2 , num1 / num2);
        break;
    case '&':
        printf("%d & %d = %d" , num1 , num2 , num1 & num2);
        break;
    case '|':
        printf("%d | %d = %d" , num1 , num2 , num1 | num2);
        break;
    case '!':
        printf("!%d = %d\n" , num1 , !num1);
        printf("!%d = %d\n" , num2 , !num2);
        break;
    default:
        printf("Invalid operator");
    }
}

int main()
{
    int num1, num2;
    char operator;
    printf("Enter the first number : "); 
    scanf("%d" , &num1);
    printf("Enter the second number : ");
    scanf("%d" , &num2);
    printf("Enter the operator : ");
    getchar();
    operator = getchar();
    calculate(num1 , num2 , operator);
    return 0;
}
/*The size of the enum is the same size of int data type (4 bytes).
This is because the compiler so when we add extra members to the enum , its size won't change (it still 4 bytes).*/