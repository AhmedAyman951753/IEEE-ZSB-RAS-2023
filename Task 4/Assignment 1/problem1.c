#include<stdio.h>
#include <stdlib.h>
typedef struct student_info
{
    unsigned int roll_number : 4; //We use unsigned int to prevent the processor from converting the decimal numbers to stored binary numbers in memory.
    unsigned age : 8;
    unsigned marks : 3;
    char *address;
    char *name;
}student;
void student_info(student s[15])
{
    printf("The information of students :-\n");
    for(int i = 0 ; i < 15 ; i++)
    {
        printf("Student %d name is : %s \n" , i , s[i].name);
        printf("Student %d address is : %s \n" , i , s[i].address);
        printf("Student %d age is : %d \n" , i , s[i].age);
        printf("Student %d roll number is : %d \n" , i , s[i].roll_number);
        printf("Student %d Mark : %d \n" , i , s[i].marks);
        printf("------------------------\n");
    }
}
int main()
{
    student s[15];
    //Student no 1:-
    s[0].roll_number = 0;     //roll_number is stored in 4 bits (from 0 to 15)
    s[0].age = 21;            //age is stored in 8 bits (from 1 to 255)
    s[0].marks = 5;          //marks is stored in 3 bits (from 1 to 7)
    s[0].name = "Ahmed";    // name is stored in 8 bytes 
    s[0].address = "A1";    // address is stored in 8 bytes
    //Student no 2:-
    s[1].roll_number = 1;
    s[1].age = 51;
    s[1].marks = 5;
    s[1].name = "Ayman";
    s[1].address = "A2";
    //Student no 3:-
    s[2].roll_number = 2;
    s[2].age = 15;
    s[2].marks = 5;
    s[2].name = "Waleed";
    s[2].address = "A3";
    //Student no 4:-
    s[3].roll_number = 3;
    s[3].age = 20;
    s[3].marks = 5;
    s[3].name = "Eslam";
    s[3].address = "A4";
    //Student no 5:-
    s[4].roll_number = 4;
    s[4].age = 17;
    s[4].marks = 5;
    s[4].name = "Mo'men";
    s[4].address = "A5";
    //Student no 6:-
    s[5].roll_number = 5;
    s[5].age = 25;
    s[5].marks = 5;
    s[5].name = "Mohamed";
    s[5].address = "A6";
    //Student no 7:-
    s[6].roll_number = 6;
    s[6].age = 10;
    s[6].marks = 5;
    s[6].name = "Omar";
    s[6].address = "A7";
    //Student no 8:-
    s[7].roll_number = 7;
    s[7].age = 12;
    s[7].marks = 5;
    s[7].name = "Mohamed";
    s[7].address = "A8";
    //Student no 9:-
    s[8].roll_number = 8;
    s[8].age = 12;
    s[8].marks = 5;
    s[8].name = "Ahmed";
    s[8].address = "A9";
    //Student no 10:-
    s[9].roll_number = 9;
    s[9].age = 12;
    s[9].marks = 5;
    s[9].name = "Ahmed";
    s[9].address = "A10";
    //Student no 11:-
    s[10].roll_number = 10;
    s[10].age = 20;
    s[10].marks = 5;
    s[10].name = "Ahmed";
    s[10].address = "A11";
    //Student no 12:-
    s[11].roll_number = 11;
    s[11].age = 20;
    s[11].marks = 5;
    s[11].name = "Ahmed";
    s[11].address = "A12";
    //Student no 13:-
    s[12].roll_number = 12;
    s[12].age = 20;
    s[12].marks = 5;
    s[12].name = "Ahmed";
    s[12].address = "A13";
    //Student no 14:-
    s[13].roll_number = 13;
    s[13].age = 20;
    s[13].marks = 5;
    s[13].name = "Ahmed";
    s[13].address = "A14";
    //Student no 15:-
    s[14].roll_number = 14;
    s[14].age = 20;
    s[14].marks = 5;
    s[14].name = "Ahmed";
    s[14].address = "A15";
    
    student_info(s);
    printf("Size of the struct is : %d bytes" , sizeof(student)); //Size of struct equals is : 8+8+8 = 24 bytes
    
    /*We can't use arrays with bitfields.
    we can't point to address with bitfields as the address may contain more than one member.*/

    return 0;
}