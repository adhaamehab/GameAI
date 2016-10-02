#include <vector>
#include <iostream>


class Human{
public:
    Human();


};


class Bot{
public:
    Bot();


};


class Board{
public:
    int gameBoard[3][3];
    Board(){
    //intialize the Game Board with 0's
        for(int i = 0;i<3;i++)
            for(int j = 0;j<3;j++)
                gameBoard[i][j]= 0;
    }
    //0 for draw
    //1 player one won
    //2 player two won
    //-1 still running
    int finished(){

            //check if there is winner
            for(int i = 0;i<3;i++){
                //check vertically
                if(gameBoard[i][0]==gameBoard[i][1] && gameBoard[i][0] ==gameBoard[i][2] && gameBoard[i][0] ) {//Wo-hoo found a winner
                    return gameBoard[i][0];
                }
                //check horizontally
                if(gameBoard[0][i]==gameBoard[1][i] && gameBoard[0][i] ==gameBoard[2][i] && gameBoard[0][i]){//Wo-hoo found a winner
                    return gameBoard[i][0];
                }
            }
            // if arrived here there is now winner vertically or horizontally
            //check the two diagonal
            if((gameBoard[0][0] == gameBoard[2][2] && gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1]) || (gameBoard[0][2]==gameBoard[2][0] && gameBoard[0][2]==gameBoard[1][1] && gameBoard[1][1]))//found a winner
                return gameBoard[1][1];

                 //check if still running or not
            int counter = 0;
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                        if(gameBoard[i][j] == 0){
                            counter++;
                        }
                    }
                }
            if(counter != 0)//found free positions //still running
                return -1;

            //no winner and the game is over so it's a draw
            return 0;
    }

    void draw(){
       for(int i = 0;i<3;i++){
        std::cout<<"|";
        for(int j = 0;j<3;j++){
            if(gameBoard[i][j] == 1){
                std::cout<< " X |";
            }
           else if(gameBoard[i][j] == 2){
                std::cout<< " O |";
            }
            else{
                std::cout<< "   |";
            }

         }
         std::cout<<std::endl;
        }
        std::cout<<std::endl;std::cout<<std::endl;std::cout<<std::endl;
        return;
    }

    bool legall(int x,int y){
        return !gameBoard[x][y];
    }
};
