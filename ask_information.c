#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv []) {
    char firstName[20] = "";
    char lastName[20] = "";
    int age = 0;

    printf("What's your firstName ?\n");
    scanf("%s", firstName);
    printf("Ok and lastName ?\n");
    scanf("%s", lastName);
    printf("And age ?\n");
    scanf("%d", &age);

    printf("You are %s %s %d yo", firstName, lastName, age);
    sleep(2);
    return 0;
}