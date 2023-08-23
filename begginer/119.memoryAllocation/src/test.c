#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int size;
  char *text = NULL;

  printf("Enter limit og the text: \n");
  scanf("%d", &size);

  text= (char*) malloc (size * sizeof(char));

  if (text != NULL) {
    printf("Enter some text: \n");
    scanf(" ");
    gets(text);

    printf("Inputed text is: %s \n", text);
  }

  free(text);
  text = NULL;
}
