#include <stdio.h>
#include <stdlib.h>

#define ARRSIZE 100

void printResult(int * primes) {
   printf("From 1..100, prime list is: \n");
   for (int i = 0; i < ARRSIZE; i++) {
      if (primes[i] != 0) {
         printf("%d ", primes[i]);         
      }      
   }
   printf("\n");
}

int isPrime(number){
   int cnt = 0;
      for (int d = 2; d < number/2; d++) {
         if (number % d == 0) {
            cnt ++;
            break;
         }          
      }
   return cnt;
}

void getPrimes(int * primes) {
   int index = 2;
   for (int i = 4; i <= ARRSIZE; i++) {
      if (isPrime(i) == 0) {
         primes[index] = i;
         index++;
      } 
   }
}

int main(int argc, char *argv[]) {
   int primes[ARRSIZE] = {2, 3};
      
   getPrimes(primes);
   printResult(primes);
   
   printf("end ");
   return 0;
}