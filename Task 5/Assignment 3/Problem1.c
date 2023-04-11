#include<stdio.h>
#define my_sizeof1 (type) (char *)(&type + 1) - (char *)(&type)

static inline int my_sizeof2(int type)
{
    return (char *)(&type + 1) - (char *)(&type);
}
int main()
{
    int size1 , size2;
    printf("The size of variable using macros : %d bytes\n" , my_sizeof1(size1));
    printf("The size of variable using inline function : %d bytes\n" , my_sizeof2(size2));
    return 0;
}
/*The main difference between macros and inline is that macros are expanded by the preprocessor
while inline is parsed by the compiler.
To define inline function we use the keyword "inline". To define macros function we use #define method.
Inline functions are short-length functions that are created automatically without the use of the inline keyword inside the class.
Macro is also known as the preprocessor directive. Macro can improve program performance and reduce redundancy.
Macro function is faster than inline function.
Inline functions can increase code size and compile time, while macro functions can make errors if used improperly.
Inline functions are generally simple and are more effective when used with functions that are called frequently.
People say that having an inline function increases performance by saving time of function call overhead.*/