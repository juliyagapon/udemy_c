#include <stdio.h>
#include <string.h>

struct sEmployee
{
  char name[50];
  char hireDate[15];
  float salary;
};

void printEmployee(struct sEmployee *pemployee) {
  printf("Employee name: %s\n", pemployee->name);
  printf("Employee hire date: %s\n", pemployee->hireDate);
  printf("Employee salary: %.2f\n", pemployee->salary);
}

void userInput(struct sEmployee *pemployee) {

  printf("Enter employee name: \n");
  gets(pemployee->name);

  printf("Enter employee hire date in format yyyy.mm.dd: \n");
  scanf("%s", pemployee->hireDate);

  printf("Enter employee salary in format ddd.dd: \n");
  scanf("%f", &pemployee->salary);
}

int main(int argc, char *argv[]) {
   struct sEmployee employee1 = {"Jack Boom", "2022.10.12", 5399.00};
   struct sEmployee employee2;

   userInput(&employee2);

   printEmployee(&employee1);
   printEmployee(&employee2);

   
}
