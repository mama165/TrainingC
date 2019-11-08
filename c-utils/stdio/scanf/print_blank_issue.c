#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

/**
 * input : je suis john.wick
 * output : jesuisjohn.wick
 */
int main(int argc, char *argv) {
    char *bufferName[80];

    printf("Enter your name : ");

    scanf("%s", bufferName);
    printf("%s", bufferName);

    scanf("%s", bufferName);
    printf("%s", bufferName);

    scanf("%s", bufferName);
    printf("%s", bufferName);
    
    sleep(5);

    return EXIT_SUCCESS;
}