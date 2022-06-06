#include<stdio.h>
#include <stdlib.h>

int main()
{
    // Constants is variable that will never changes;
    const int myBirthYear = 2003;

    // This will error, because constant cannot changes
    myBirthYear += 10;

    printf(myBirthYear);

    return 0;
}