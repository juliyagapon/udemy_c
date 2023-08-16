#include <stdio.h>
#include <stdlib.h>

int enterNumber(){
    int user_guess;
    printf("Try to guess, enter your number from 0-20 \n");
    scanf("%d", &user_guess);
    if (user_guess > 20 || user_guess < 0){
        printf("Hmmm, enter number shoud be between 0-20 \n");
        enterNumber();
    }
    return user_guess;
}

int main(int argc, char *argv[]) {
    int new_round = 1;
    int user_guess;

    while (new_round == 1)
    {
        printf("Ho, ho, new game started!!!\n");
        int randomNumber = rand() % 21;
        
        for (int i = 0; i < 5; i++) {
            user_guess = enterNumber();
           
            if (user_guess==randomNumber){
                printf("Your guess was right. Number is %d\n", randomNumber);
                break;
            }

            else {
                if (i == 4) printf("No more tries you are lose :( \n");
                else printf("You was wrong you have %d tries \n", (4-i));
            }
        }

        printf("One more round? 1 - YES, any number - NO\n");
        scanf("%d", &new_round);
    }
    printf("Bye, bye!\n");
   return 0;
}