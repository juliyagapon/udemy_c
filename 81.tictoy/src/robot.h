ifndef ROBOT_H 
#define ROBOT_H 

int checkWinRow(
   int arrTicToy[3][3]
);

int checkWinColumn(
   int arrTicToy[3][3]
);

int checkWinDioganal(
   int arrTicToy[3][3]);

int robootTurnToRow(int arrTicToy[3][3]);

int robootTurnToColumn(int arrTicToy[3][3]);

int robootTurnToDioganal(int arrTicToy[3][3]) ;

#endif /* ROBOT_H */ 