#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv []) {
    char bufferFirstName[20] = "";
    char bufferLastName[20] = "";
    int bufferAge = 0;

    puts("FirstName ?");
    scanf("%s", bufferFirstName);
    puts("LastName ?");
    scanf("%s", bufferLastName);
    puts("Age ?");
    
    // int value = scanf("%d", &bufferAge);
    
    while (scanf("%d", &bufferAge) != 1) {
        printf("Bad age, fill it again \n");
    }

    printf("You are %s %s (%d years old)", bufferFirstName, bufferLastName, bufferAge);
    sleep(2);
    return EXIT_SUCCESS;
}