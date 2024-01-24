#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *file;

  file= fopen("data.txt","r");

  if (file == NULL){
    printf("Error opening file ");
    return 1;
  }

  char c;
  while ((c = fgetc(file)) != EOF){
    printf("%c" , c);
  }
  printf("\n");

  rewind(file); // reset to the beginning of the file

  while ((c = fgetc(file)) != EOF){
    printf("%c" , c);
  }

  fclose(file);

    return 0;
}
