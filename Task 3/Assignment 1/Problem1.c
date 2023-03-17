#include <stdio.h>
struct Student_info
{
    char name[50];
    char address[50];
    int age;
    int roll_number;
    float mark;
}s[15];

int main(){
    int i;
    for(i = 1; i<16 ;i++){
        printf("Enter student %d roll number : ",i);
        scanf("%d",&s[i].roll_number);
        printf("Enter student %d name : ",i);
        gets(s[i].name);
        printf("Enter student %d age : ",i);
        scanf("%d",&s[i].age);
        printf("Enter student %d address : ",i);
        gets(s[i].address);
        printf("Enter student %d mark : ",i);
        scanf("%f",&s[i].mark);
        printf("------------------------\n");
    }
    printf("The information of student %d\n\n" , s[i]);
    for(i = 1; i<16 ;i++){
        printf("Student %d roll number is : %d \n",i,s[i].roll_number);
        printf("Student %d name is : %s \n",i,s[i].name);
        printf("Student %d age is : %d\n",i,s[i].age);
        printf("Student %d address is : %s\n",i,s[i].address);
        printf("Student %d mark is : %0.1f\n",i,s[i].mark);
    }
    return 0;
}