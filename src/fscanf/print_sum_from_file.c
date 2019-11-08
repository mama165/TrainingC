#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<errno.h>
#include<string.h>

//https://www.studytonight.com/c/error-handling-in-c.php

/**
 * Input (file) : a b c d
 * Output : a+b+c+d
 */
int main(int argc, char *argv[]) {
  int sum = 0;
  FILE *file;
  char *path = "../resources/numbers.txt";
  file = fopen(path, "r");

 if(errno > 0) {
  printf("This error occured : %s (code %d)\n", strerror(errno), errno);
  return EXIT_FAILURE;
 }
 
 while (!feof(file)){
   int tempValue;
   fscanf(file, "%d", &tempValue);
   sum += tempValue;
  }

  fclose(file);
  printf("%d", sum);
}