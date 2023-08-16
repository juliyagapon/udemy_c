#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BOARDSIZE 3

#define PLAYER1 10
#define PLAYER2 20
#define PLAYEROUT1 'X'
#define  PLAYEROUT2 'O'


bool isEmptyCell(int cell) {
   return ((cell != PLAYER1) && (cell != PLAYER2));
}

char trancformToPrint(int turn) {
   char result;
   switch (turn)
   {
   case PLAYER1:
      return PLAYEROUT1;
   case PLAYER2:
      return PLAYEROUT2;
   default:
      return turn+'0';
   }
}

void drawBoard(int arrTicToy[BOARDSIZE][BOARDSIZE]) {
   printf("\n");
   printf("  %c  |  %c  |  %c  \n", trancformToPrint(arrTicToy[0][0]), trancformToPrint(arrTicToy[0][1]), trancformToPrint(arrTicToy[0][2]));
   printf("------------------\n");
   printf("  %c  |  %c  |  %c  \n", trancformToPrint(arrTicToy[1][0]), trancformToPrint(arrTicToy[1][1]), trancformToPrint(arrTicToy[1][2]));
   printf("------------------\n");
   printf("  %c  |  %c  |  %c  \n", trancformToPrint(arrTicToy[2][0]), trancformToPrint(arrTicToy[2][1]), trancformToPrint(arrTicToy[2][2]));
   printf("\n");
}

bool noEmptyCell(int arrTicToy[BOARDSIZE][BOARDSIZE]) {
   for (int r = 0; r < BOARDSIZE; r++) {
      for (int c = 0; c < BOARDSIZE; c++) {
         if (isEmptyCell(arrTicToy[r][c])) return false;
      }
   }
   return true;
}

void makeTurn(
   int playerid,
   int arrTicToy[BOARDSIZE][BOARDSIZE]
) {
   /*
      1: [0, 0] 2: [0, 1] 3: [0, 2]
      4: [1, 0] 5: [1, 1] 6: [1, 2]
      7: [2, 0] 8: [2, 1] 9: [2, 2]
   */

   int dic[9][2] = {
      {0, 0}, {0, 1}, {0, 2},
      {1, 0}, {1, 1}, {1, 2},
      {2, 0}, {2, 1}, {2, 2},
   };

   printf("Please make you turn");

   int turnDone = 0;
   int turn = 0;
   while (turnDone != 1)
   {
      printf("\nMake your turn from 1..9. Don\'t put used cell\n");
      scanf("%d", &turn);

      if (turn > 9 || turn < 1) {
         continue;
      }
      int r = dic[turn-1][0];
      int c = dic[turn-1][1];

      if (isEmptyCell(arrTicToy[r][c])) {
         arrTicToy[r][c] = playerid;
         printf("\nTurn is taken\n");
         drawBoard(arrTicToy);
         turnDone = 1;
         
      }
      else {
         printf("\nMake other turn is not allowed\n");
         drawBoard(arrTicToy);
      }
   } 
}

int checkWinRow(
   int arrTicToy[BOARDSIZE][BOARDSIZE],
   int playerid
){
   for (int r = 0; r < BOARDSIZE; r++) {
      int counter = 0;
      for (int c = 0; c < BOARDSIZE; c++) {
         if (arrTicToy[r][c] == playerid) {
            counter++; 
         }         
      }
      if (counter == 3) return 1;
   }
   return 0;
}

int checkWinColumn(
   int arrTicToy[BOARDSIZE][BOARDSIZE],
   int playerid
){
   for (int c = 0; c < BOARDSIZE; c++) {
      int counter = 0;
      for (int r = 0; r < BOARDSIZE; r++) {
         if (arrTicToy[r][c] == playerid) {
            counter++; 
         }         
      }
      if (counter == 3) return 1;
   }
   return 0;
}

int checkWinDioganal(
   int arrTicToy[BOARDSIZE][BOARDSIZE],
   int playerid
) {
   /*
      [0, 2] [1, 1] [2, 0]
      [0, 0] [1, 1] [2, 2]
   */
  int countDiog = 2;
  int dic[2][3][2] = {
   {
      {0, 2}, {1, 1}, {2, 0}
   },
   {
      {0, 0}, {1, 1}, {2, 2}
   }
  };

  for (int i=0; i < countDiog; i++) {
      int element1_r = dic[i][0][0];
      int element1_c = dic[i][0][1];
      
      int element2_r = dic[i][1][0];
      int element2_c = dic[i][1][1];

      int element3_r = dic[i][2][0];
      int element3_c = dic[i][2][1];

      if (arrTicToy[element1_r][element1_c] == playerid && 
          arrTicToy[element2_r][element2_c] == playerid && 
          arrTicToy[element3_r][element3_c] == playerid ) return 1;
  }
  return 0;

}

int robootTurnToRow(int arrTicToy[BOARDSIZE][BOARDSIZE]) {
   for (int r = 0; r < BOARDSIZE; r++) {
      for (int c = 0; c < BOARDSIZE; c++) {
         if (isEmptyCell(arrTicToy[r][c])) {
            arrTicToy[r][c] = PLAYER2;
            return 0;
         }         
      }
   }
}

int robootTurnToColumn(int arrTicToy[BOARDSIZE][BOARDSIZE]) {
   for (int c = 0; c < BOARDSIZE; c++) {
      for (int r = 0; r < BOARDSIZE; r++) {
         if (isEmptyCell(arrTicToy[r][c]))  {
            arrTicToy[r][c] = PLAYER2;
            return 0;
         }         
      }
   }
}

void robootTurnToDioganal(int arrTicToy[BOARDSIZE][BOARDSIZE]) {
   /*
      [0, 2] [1, 1] [2, 0]
      [0, 0] [1, 1] [2, 2]
   */

  int countDiog = 2;
  int dic[2][3][2] = {
   {
      {0, 2}, {1, 1}, {2, 0}
   },
   {
      {0, 0}, {1, 1}, {2, 2}
   }
  };

  for (int i=0; i < countDiog; i++) {
      for (int j = 0; j < 3; j++) {
         int element1_r = dic[i][j][0];
         int element1_c = dic[i][j][1];

      if (isEmptyCell(arrTicToy[element1_r][element1_c])) {
         arrTicToy[element1_r][element1_c] = PLAYER2;
         return;
      }  
    }
   }
}

/*
Robot turn
*/

bool robotCheckWinRow(
   int arrTicToy[BOARDSIZE][BOARDSIZE],
   int playerId
){
   for (int r = 0; r < BOARDSIZE; r++) {
      int counter = 0;
      for (int c = 0; c < BOARDSIZE; c++) {
         if (arrTicToy[r][c] == playerId) {
            counter++; 
         }         
      }
      if (counter == 2) {
         int emptyCounter = 0;
         for (int c = 0; c < BOARDSIZE; c++) {
            if (isEmptyCell(arrTicToy[r][c])){
               arrTicToy[r][c] = PLAYER2;
               return true;
            }
         }
      }
   }
   return false;
}

bool robotCheckWinColumn(
   int arrTicToy[BOARDSIZE][BOARDSIZE],
   int playerId
) {
   for (int c = 0; c < BOARDSIZE; c++) {
      int counter = 0;
      for (int r = 0; r < BOARDSIZE; r++) {
         if (arrTicToy[r][c] == playerId) {
            counter++; 
         }         
      }
      if (counter == 2) {
         for (int r = 0; r < BOARDSIZE; r++) {
            if (isEmptyCell(arrTicToy[r][c])) {
               arrTicToy[r][c] = PLAYER2;
               return true;
            }
         }
      }
   }
   return false;
}

bool robotCheckWinDioganal(
   int arrTicToy[BOARDSIZE][BOARDSIZE],
   int playerId
){
   /*
      [0, 2] [1, 1] [2, 0]
      [0, 0] [1, 1] [2, 2]
   */

   int countDiog = 2;
   int dic[2][3][2] = {
   {
      {0, 2}, {1, 1}, {2, 0}
   },
   {
      {0, 0}, {1, 1}, {2, 2}
   }
  };

  for (int i=0; i < countDiog; i++) {
      int element1_r = dic[i][0][0];
      int element1_c = dic[i][0][1];
      
      int element2_r = dic[i][1][0];
      int element2_c = dic[i][1][1];

      int element3_r = dic[i][2][0];
      int element3_c = dic[i][2][1];

      if (arrTicToy[element1_r][element1_c] == PLAYER1 && 
          arrTicToy[element2_r][element2_c] == PLAYER1 &&
          isEmptyCell(arrTicToy[element3_r][element3_c])){
            arrTicToy[element3_r][element3_c] = PLAYER2;
            return true;
          }

      if (arrTicToy[element1_r][element1_c] == PLAYER1 && 
          arrTicToy[element3_r][element3_c] == PLAYER1 &&
          isEmptyCell(arrTicToy[element2_r][element2_c])) {
            arrTicToy[element2_r][element2_c] = PLAYER2;
            return true;
          }
      
      if (arrTicToy[element2_r][element2_c] == PLAYER1 && 
          arrTicToy[element3_r][element3_c] == PLAYER1 &&
          isEmptyCell(arrTicToy[element1_r][element1_c])){
            arrTicToy[element1_r][element1_c] = PLAYER2;
            return true;
          }
  }
  return false;

}

void robotGo(
   int arrTicToy[BOARDSIZE][BOARDSIZE]
){

   printf("Robot turn");
   int checker = -1;
   
   //Try to win
   if (robotCheckWinRow(arrTicToy, PLAYER2)) return;
   if (robotCheckWinColumn(arrTicToy, PLAYER2)) return;
   if (robotCheckWinDioganal(arrTicToy, PLAYER1)) return;


   if (robotCheckWinRow(arrTicToy, PLAYER1)) return;
   if (robotCheckWinColumn(arrTicToy, PLAYER1)) return;
   if (robotCheckWinDioganal(arrTicToy, PLAYER1)) return;
  

  for (int i = 0; i < BOARDSIZE; i++) {
      for (int j = 0; j < BOARDSIZE; j++) {
         if (isEmptyCell(arrTicToy[i][j])) {
            arrTicToy[i][j] = PLAYER2;
            return;
         }
      }
  }
}

int checkWin(
   int arrTicToy[BOARDSIZE][BOARDSIZE],
   int playerid
){
   if (checkWinRow(arrTicToy, playerid) == 1) {
      printf("\nPlayer %d win. 3 in row.\n", playerid);
      return 1;
   }
   if (checkWinColumn(arrTicToy, playerid) == 1){
      printf("\nPlayer %d win. 3 in column.\n", playerid);
      return 1;
   }
   if (checkWinDioganal(arrTicToy, playerid) == 1) {
      printf("\nPlayer %d win. 3 in Diagonal.\n", playerid);
      return 1;
   }
   return 0;
}

int changePlayer(int playerId) {
   if (playerId == PLAYER1) return PLAYER2;
   if (playerId == PLAYER2) return PLAYER1;
}

int main(int argc, char *argv[]) {
   int arrTicToy [3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
   };
   drawBoard(arrTicToy);
   printf("\n");

   int gameEnd = 0;
   int playerid = PLAYER1;
   while( gameEnd == 0 ){

      if (noEmptyCell(arrTicToy)) {
          printf("\nNo empty cell. No WINNER \n" );
          break;
      }

      switch (playerid)
      {
      case PLAYER1:
         makeTurn(playerid, arrTicToy);
         break;
      
      default:
         robotGo(arrTicToy);
         break;
      }

      gameEnd = checkWin(arrTicToy, playerid);
      if (gameEnd==1) {
         break;
      }
      drawBoard(arrTicToy);
      printf("\n");

      if (gameEnd == 0) playerid = changePlayer(playerid);
   }
   
   drawBoard(arrTicToy);
   return 0;
}