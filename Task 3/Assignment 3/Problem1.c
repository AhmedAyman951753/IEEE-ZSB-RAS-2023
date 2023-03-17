#include<stdio.h>
#include <stdlib.h>
struct test
{
    int Id;
    char *name;
    char class_id;
};
struct test1
{
    char *name;
    int Id;
    char class_id;
};
int main(){
    printf("Size of the struct before changing the order : %d\n" , sizeof(struct test));
    printf("Size of the struct after changing the order: %d" , sizeof(struct test1));
    return 0;


    /*Explanation :-
    The reason is the padding added by the compiler to avoid allignment issues.
    Padding is added when a structure member is followed by a member with a larger size or at the end of the structure.
    As sizeof function for a structure isn't always equal to the sum of sizeof of ezch member in the structure.
    My computer stores the structure using word boundary. That means that the processor doesn't read from memory 1 byte at a time
    ,but it reads 1 word at a time. 1 word size is 8 bytes as the processor of my computer is 64 bit.
    So that at the first structure , the first variable is int so it takes 4 bytes then char *name is 8 bytes so the processor
    will leave the 4 bytes next to the first variable and takes the next 4 bytes , finally we have int that takes 4 bytes 
    will take new word (8 bytes) next to the last 8 bytes so we have (4 + 4 + 8 + 4 + 4) = 24
    the second struct makes the same but (8 + 4 + 4) it takes only 2 words otherwise the first struct takes 3 words*/
}