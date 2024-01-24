#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
char PLAYER;
char COMPUTER;

void restBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);




int main()
{
    char response;
    char winner;
    do{
        do{
        printf("Would you like to play with X or O :");
        scanf(" %c", &PLAYER);
        PLAYER = toupper(PLAYER);
        }while(PLAYER != 'O' && PLAYER!= 'X' );

        if (PLAYER == 'X'){
                COMPUTER='O';
            }else{
                COMPUTER='X';
        }

        winner=' ';
        restBoard();
        while(winner == ' '&& checkFreeSpaces()!= 0){
            printBoard();
            playerMove();
            winner = checkWinner();

            if ( winner != ' ' || checkFreeSpaces()==0 ){
                break;
            }
            computerMove();
            winner = checkWinner();

            if ( winner != ' ' || checkFreeSpaces()==0 ){
                break;
            }
        }

        printBoard();
        printWinner(winner);

        printf("\nWould you like to play again ? (Y/N)");
        scanf(" %c", &response);
        response= toupper(response);

    }while( response !='N');

    printf("Thanks for playing!");
    return 0;
}
void restBoard(){
    for (int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]= ' ';
        }
    }


}
void printBoard(){
    printf("%c  | %c | %c",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf("%c  | %c | %c",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf("%c  | %c | %c",board[2][0],board[2][1],board[2][2]);
    printf("\n");


}
int checkFreeSpaces(){
    int freeSpaces=9;
    for (int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            if (board[i][j]!=' '){
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}
void playerMove(){
    int x,y;
    do{
        printf("enter row #(1-3) :");
        scanf("%d", &x);
        x--;
        printf("enter column #(1-3) :");
        scanf("%d", &y);
        y--;

        if (board[x][y]!= ' '){
            printf("invalide move!\n");
        }else{
            board[x][y]= PLAYER;
            break;
        }
    }while(board[x][y]!= ' ');
}
void computerMove(){
    //creates seed  based  on current time
    int x,y;

    if (checkFreeSpaces()>0){
    srand(time(NULL));
        do{
            x=rand()%3;
            y=rand()%3;
        }while(board[x][y] != ' ');
        board[x][y]= COMPUTER ;

    }else{
        printWinner(' ');
    }

}
char checkWinner(){
    //check rows
    for (int i = 0;i<3;i++){
        if(board[i][0]== board[i][1] && board[i][0]== board[i][2] ){
                return board[i][0];

        }
    }
    //check columns
    for (int j = 0;j<3;j++){
        if(board[0][j]== board[1][j] && board[0][j]== board[2][j] ){
            return board[0][j];
        }
    }
    //check diagnals
    if (board[0][0]==board[1][1] && board[0][0]==board[2][2]){
        return board[0][0];
    }
    if (board[0][2]==board[1][1] && board[0][2]==board[2][0]){
        return board[0][2];
    }
    return ' ';
}
void printWinner(char winner){
    if (winner == PLAYER ){
        printf("YOU WIN !");
    }else if (winner == COMPUTER){
        printf("YOU LOSE !");
    }else{
        printf("IT'S A TIE!");
    }

}
