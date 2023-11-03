#include <stdio.h>

int win_condition_check(void)
{
    //should return 1 unless it finds a 3 in a row that isn't _ or blank.
    char board[16] = "___\n___\n___\n";
    while (board[0]== board[1],board[0]==board[2],board[0,1,2]!= "_")
    {
        return 0;
    }
    while(board[4]==board[5],board[4]==board[6],board[4,5,6]!= "_")
    {
        return 0;
    }
    while (board[8]==board[9],board[8]==board[10],board[8,9,10]!= "_")
    {
        return 0;
    }
    while (board[0]== board[4],board[0]==board[8],board[0]!= "_")
    {
        return 0;
    }
    while(board[1]==board[5],board[1]==board[9],board[1]!= "_")
    {
        return 0;
    }
    while (board[2]==board[6],board[2]==board[10],board[2]!= "_")
    {
        return 0;
    }
    while (board[0]== board[5],board[0]==board[10],board[0]!= "_")
    {
        return 0;
    }
    while(board[2]==board[5],board[1]==board[8],board[2]!= "_")
    { 
        return 0;
    }
                            
    return 1;
}

    
