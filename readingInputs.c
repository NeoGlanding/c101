#include <stdlib.h>
#include <stdio.h>

int main()
{
    // reading input string
    char name[50];
    printf("Enter your name: ");
    fgets(name, 50, stdin);
    printf("Your name is %s", name);

    // reading input integer
    int age;
    printf("Enter your age: ");
    // Don't forget to add "&" in front of variable
    scanf("%d", &age);
    printf("Your age is : %d\n", age);

    // reading input char
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Your grade is %c\n", grade);

    // reading input double
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f \n", gpa);

    return 0;
}