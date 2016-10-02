#include "Game.cpp"

using namespace std;

int main(){

    Board* board = new Board();
    bool turn = false;
    //false => 1
    //true => 2
    //game Loop
    while(1){
        board->draw();
        if(board->finished() == 0){
            cout<<"     D R A W     ";
            break;
            }
        if(board->finished() == 1){
            cout<<"     P L A Y E R     O N E    W O N   ";
            break;
            }
        if (board->finished() == 2 ){
            cout<<"     P L A Y E R     T W O     W O N   ";
            break;
            }
        if(board->finished() == -1 ){
            int x,y;
            if(!turn){
               cout<<"\n     P L A Y E R     O N E: ";
               cin>>x>>y;
               if(!board->legall(x,y))
                continue;
               board->gameBoard[x][y]= 1;
               turn = !turn;

            }
            else{
               cout<<"\n     P L A Y E R     T W O: ";
               cin>>x>>y;
               if(!board->legall(x,y))
                continue;
               board->gameBoard[x][y]= 2;
               turn = !turn;
            }

        }

    }



return 0;
}
