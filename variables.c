#include <stdio.h>
#include <stdlib.h>

void main()
{
    char characterName[] = "John Doe";
    int characterAge = 25;

    // %s meaning placeholder for string
    printf("One time, there's a man name %s\n", characterName);
    // %d meaning placeholder for integer
    printf("%s was %d years old\n", characterName, characterAge);

    // shorthand for characterAge = characterAge + 10
    characterAge += 10;
    printf("10 years later, %s turned %d years old \n", characterName, characterAge);
}