#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = '';

    resetBoard();
    while()
    {
      printBoard();
    }
    


    return 0;
}

void resetBoard();
{
   for(int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
        board[i][j] = '';
      }
   }
}
void printBoard()
{
   printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
   printf("\n---|---|---\n");
}   
int checkFreeSpaces()
{

}