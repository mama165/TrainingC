#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv []) {
    char firstName[20] = "";
    char lastName[20] = "";
    int age = 0;

    printf("firstName ?\n");
    scanf("%s", firstName);
    printf("lastName ?\n");
    scanf("%s", lastName);
    printf("age ?\n");
    scanf("%d", age);

    printf("You are %s %s , %d years old", firstName, lastName, age);

    return 0;
}