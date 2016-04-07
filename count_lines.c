#include <stdio.h>
/*
 * Count how many ';' in given file.
 */
int main(int argc, char const *argv[]) {
  if(argc < 2){
    printf("Empty Input!\n");
    return 0;
  }
  FILE * fp = fopen(argv[1],"r");
  int total = 0;
  char c;
  if(fp == NULL){
    printf("Can not found %s\n",argv[1]);
    return 0;
  }
  while(feof(fp)==0){
    fscanf(fp, "%c", &c);
    if(c==';') total++;
  }
  printf("There are %d lines in %s.\n",total,argv[1]);

  fclose(fp);
  return 0;
}
