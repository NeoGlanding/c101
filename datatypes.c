#include <stdio.h>
#include <stdlib.h>

int main() {
    // String is for storing more than one character
    char fullName[] = "Jonathan Doe";
    // Integer is absolute values
    int age = 25;
    // Double is floating value with decimal
    double gpa = 3.78;
    // Char is for storing one character
    char gpaInChar = 'A';
    
    // %d for integer
    // %f for double
    // %s for string
    // %c for char
    printf("His name is %s, his age %d, he had GPA with score %f / %c\n", fullName, age, gpa, gpaInChar);

    return 0;
}