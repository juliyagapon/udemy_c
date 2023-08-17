#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct sFamily
{
  char name[20];
  int age;
  char father[20];
  char mother[20];
};

bool sublins(struct sFamily *family1, struct sFamily *family2) {
  return (*family1->father == *family2->father && *family1->mother == *family2->mother);
}

int main(int argc, char *argv[]) {
  struct sFamily family1 = {'Jane', 10, 'Oleg', 'Olga'};
  struct sFamily family2 = {'Jack', 13, 'Oleg', 'Olga'};
  
}
