#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<errno.h>
#include<string.h>

//https://www.studytonight.com/c/error-handling-in-c.php

/**
 * 
 */
int main(int argc, char *argv[]) {
  int sum = 0;
  FILE *file;
  char s[100];
  //file = fopen("C:\\Users\\mael.nana\\Desktop\\project\\project-c-git\\TrainingC\\c-utils\\stdio\\fscanf\\foo.txt", "r");
  file = fopen("fscanf/foo.txt", "r");
   printf("%s\n", getcwd(s, 100));
  //perror("error");

  printf("This error occured : %s (code %d)", strerror(errno), errno);

  while (!feof(file)){
      int tempValue;
      fscanf(file, "%d", &tempValue);
      sum += tempValue;
  }

  fclose(file);
  printf("%d", sum);
}