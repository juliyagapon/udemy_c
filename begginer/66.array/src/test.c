#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
   
   int count = 10;
   int numbers[count];
   long sum = 0;
   float average = 0.0f;

   printf("\n Enter the 10 numbres: \n");
   int i;

    for (i = 0; i < count; i++) {
        printf("%2u ", i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum/count;

    printf("\naverage = %.2f\n", average);

   return 0;
}