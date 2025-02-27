#include "queen_attack.h"
int board[8][8] = {
    {2,4,3,5,6,3,4,2},
    {1,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {1,1,1,1,1,1,1,1},
    {2,4,3,5,6,3,4,2}
};
int blackWhite[8][8] = {
    {2,2,2,2,2,2,2,2},
    {2,2,2,2,2,2,2,2},
    {2,2,2,2,2,2,2,2},
    {1,1,1,2,2,2,2,2},
    {2,2,2,2,2,2,2,2},
    {2,2,2,2,2,2,2,2},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1}
};
int piece = board[][];
int color = blackWhite[][];
attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    
   if(x > 7 || x < 0 || y > 7 || y < 0)
        return INVALID_POSITION;
    if(piece == 0){
        return INVALID_POSITION;  
    }
}