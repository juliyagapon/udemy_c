#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
   //searching strchr strstr 
   //break sentence to word strtok()
   //islower isupper isalpha isdigit

//searching strchr  
  char str[] = "The quick brown fox";
  //char ch = 'q';
  int ch = 'q';
  char *pGot_char = NULL;
  pGot_char = strchr(str, ch);

  printf ("result is: %s\n", pGot_char);
  printf ("result is: %d\n", *pGot_char);

//searching strstr 
  char text[] = "Every dog has his day";
  char word[] = "dog";

  char *pFound = NULL;
  pFound = strstr(text, word);

  printf ("result is: %s\n", pFound);
  printf ("result is: %d\n", *pFound);

  //break sentence to word strtok()
  char string2[90] = "Hello how are you - My name is - Iuliia";
  const char s[2] = "-";
  char *tocken;

  //get the fist tocken
  tocken = strtok(string2, s);

  while (tocken != NULL)
  {
    printf("%s\n", tocken);
    tocken = strtok(NULL, s);
  }
  

}