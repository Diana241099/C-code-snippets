#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    age = 16;
    printf("My age is %d\n", age);

    // check if my age is even or odd
    if (age % 2 == 0 ) {
        printf("My age is even.\n");
    }

        else{
            printf("My age is odd.\n");
        }


    char name[] = "Diana";
    printf("My name is %s\n", name);

    char first_letter = name[0];
    printf("The first letter of my name is %c\n", first_letter);

    int leng_of_name = strlen(name);
    char last_letter = name[leng_of_name - 1];
    printf("The last letter of my name is %c\n", last_letter);


    return 0;
    }



