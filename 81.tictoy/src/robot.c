#include <stdio.h>
#include <stdlib.h>
#include <robot.h>


int checkWinRow(
   int arrTicToy[3][3]
){
   for (int r = 0; r < 3; r++) {
      int counter = 0;
      for (int c = 0; c < 3; c++) {
         if (arrTicToy[r][c] == 1) {
            counter++; 
         }         
      }
      if (counter == 2) {
         for (int c = 0; c < 3; c++) {
            if (arrTicToy[r][c] == 0) {
               continue;; 
            }         
         }
         return 1;
      }
   }
   return 0;
}

int checkWinColumn(
   int arrTicToy[3][3]
) {
   for (int c = 0; c < 3; c++) {
      int counter = 0;
      for (int r = 0; r < 3; r++) {
         if (arrTicToy[r][c] == 1) {
            counter++; 
         }         
      }
      if (counter == 2) {
         for (int r = 0; r < 3; r++) {
            if (arrTicToy[r][c] == 0) {
               continue;; 
            }         
         }
         return 1;
      }
   return 0;
   }
}

int checkWinDioganal(
   int arrTicToy[3][3]){
   /*
      [0, 2] [1, 1] [2, 0]
      [0, 0] [1, 1] [2, 2]
   */

      if (((arrTicToy[0][2] == 1 && arrTicToy[1][1] == 1 ) || 
           (arrTicToy[0][2] == 1 && arrTicToy[2][0] == 1 ) ||
           (arrTicToy[1][1] == 1 && arrTicToy[2][0] == 1 )) &&
           (arrTicToy[0][2] == 0 || arrTicToy[1][1] == 0 || arrTicToy[1][1] == 0)) return 1;
      if (((arrTicToy[0][0] == 1 && arrTicToy[1][1] == 1 ) || 
           (arrTicToy[0][0] == 1 && arrTicToy[2][2] == 1 ) ||
           (arrTicToy[1][1] == 1 && arrTicToy[2][2] == 1 )) &&
           (arrTicToy[0][0] == 0 || arrTicToy[1][1] == 0 || arrTicToy[2][2] == 0)) return 1;
   
   return 0;

}

int robootTurnToRow(int arrTicToy[3][3]) {
   for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 3; c++) {
         if (arrTicToy[r][c] == 0) {
            arrTicToy[r][c] = 2;
            return;
         }         
      }
   }
}

int robootTurnToColumn(int arrTicToy[3][3]) {
   for (int c = 0; c < 3; c++) {
      for (int r = 0; r < 3; r++) {
         if (arrTicToy[r][c] == 0) {
            arrTicToy[r][c] = 2;
            return;
         }         
      }
   }
}

int robootTurnToDioganal(int arrTicToy[3][3]) {
   /*
      [0, 2] [1, 1] [2, 0]
      [0, 0] [1, 1] [2, 2]
   */
  if (arrTicToy[0][2] == 0) {
      arrTicToy[0][2] = 2;
      return;
  }
  if (arrTicToy[1][1] == 0) {
      arrTicToy[1][1] = 2;
      return;
  }
  if (arrTicToy[2][0] == 0) {
      arrTicToy[2][0] = 2;
      return;
  }
  if (arrTicToy[0][0] == 0) {
      arrTicToy[0][0] = 2;
      return;
  }
  if (arrTicToy[2][2] == 0) {
      arrTicToy[2][2] = 2;
      return;
  }
}

void robotGo(
   int arrTicToy[3][3]
){
   //Do not allow to win
   int notAllowWin[2] = {0, 0};
   if (checkWinRow(arrTicToy) == 1) {
      notAllowWin[0] = 1;
      notAllowWin[1] = 1;
   }
   if (checkWinColumn(arrTicToy) == 1) {
      notAllowWin[0] = 1;
      notAllowWin[1] = 2;
   }
   if (checkWinDioganal(arrTicToy) == 1) {
      notAllowWin[0] = 1;
      notAllowWin[1] = 3;
   }

   //Try to win
   int tryAllowWin[2] = {0, 0};
   if (checkWinRow(arrTicToy) == 1) {
      tryAllowWin[0] = 1;
      tryAllowWin[1] = 1;
   }
   if (checkWinColumn(arrTicToy) == 1) {
      tryAllowWin[0] = 1;
      tryAllowWin[1] = 2;
   }
   if (checkWinDioganal(arrTicToy) == 1) {
      tryAllowWin[0] = 1;
      tryAllowWin[1] = 3;
   }

   if (tryAllowWin[0] == 1) {
      if (tryAllowWin[1] == 1) {
         robootTurnToRow(arrTicToy);
         return;
      }
      if (tryAllowWin[1] == 2) {
         robootTurnToColumn(arrTicToy);
         return;
      }
      if (tryAllowWin[1] == 3) {
         robootTurnToDioganal(arrTicToy);
         return;
      }
   }

   if (notAllowWin[0] == 1) {
      if (notAllowWin[1] == 1) {
         robootTurnToRow(arrTicToy);
         return;
      }
      if (notAllowWin[1] == 2) {
         robootTurnToColumn(arrTicToy);
         return;
      }
      if (notAllowWin[1] == 3) {
         robootTurnToDioganal(arrTicToy);
         return;
      }
   }
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         if (arrTicToy[i][j] == 0) {
            arrTicToy[i][j] = 2;
            return;
         }
      }
  }
}
