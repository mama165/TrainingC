#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

/**
 * input : je suis john.wick
 * output : je suis john.wick
 */
int main(int argc, char *argv[]) {
    char *bufferName[80];

    printf("Enter your name : ");

    scanf("%[^\n]", bufferName);
    printf("%s", bufferName);
    
    sleep(5);

    return EXIT_SUCCESS;
}