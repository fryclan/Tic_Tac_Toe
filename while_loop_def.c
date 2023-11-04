#include <stdio.h>
#include <string.h>

char board[16]="___\n___\n___\n";
char X[2] = "X";
char O[2] = "O";
char blank[2] = "_";
int x_row;
int x_collum;
int o_row;
int o_collum;


char* readline(char str[], size_t size)
{
    if (fgets(str, size, stdin) != NULL)
    {
        size_t length = strlen(str);
        if ((length > 0) && (str[length-1]=='\n'))
        {
            str[length - 1] - '\0';
        }
        return str;
    }
    else   
        return NULL;
}




int win_condition_check(void)
{
    //should return 1 unless it finds a 3 in a row.
    while (board[0] == board[1] && board[0] == board[2] && board[0] != blank[0])
    {
        return 0;
    }
    while(board[4]==board[5] && board[4]==board[6]&& board[4] != blank[0])
    {
        return 0;
    }
    while (board[8]==board[9] && board[8]==board[10]&& board[8] != blank[0])
    {
        return 0;
    }
    while (board[0]== board[4] && board[0]==board[8] && board[0] != blank[0])
    {
        return 0;
    }
    while(board[1]==board[5] && board[1]==board[9]&& board[1] != blank[0])
    {
        return 0;
    }
    while (board[2]==board[6] && board[2]==board[10]&& board[2] != blank[0])
    {
        return 0;
    }
    while (board[0]== board[5] && board[0]==board[10]&& board[0] != blank[0])
    {
        return 0;
    }
    while(board[2]==board[5] && board[1]==board[8]&& board[2] != blank[0])
    { 
        return 0;
    }
                            
    return 1;
}

void main()
{
    int board_len = strlen(board);
    while (win_condition_check() == 1)
    {      
        printf("enter where you want an X:\nrow: ");
        scanf("%d", &x_row);
        printf("now the collum: ");
        scanf("%d", &x_collum);
        printf("enter where you want an O:\nrow: ");
        scanf("%d", &o_row);
        printf("now the collum: ");
        scanf("%d", &o_collum);

        for (int i=0; i<= board_len; ++i)
        {
            if (x_row == 1 && x_collum == 1)
            {
                board[0] = ("%c", X[0]);
            }
            if (x_row == 1 && x_collum == 2)
            {
                board[1] = ("%c", X[0]);
            }
            if (x_row == 1 && x_collum == 3)
            {
                board[2] = ("%c", X[0]);
            }
            if (x_row == 2 && x_collum == 1)
            {
                board[4] = ("%c", X[0]);
            }
            if (x_row == 2 && x_collum == 2)
            {
                board[5] = ("%c", X[0]);
            }
            if (x_row == 2 && x_collum == 3)
            {
                board[6] = ("%c", X[0]);
            }
            if (x_row == 3 && x_collum == 1)
            {
                board[8] = ("%c", X[0]);
            }
            if (x_row == 3 && x_collum == 2)
            {
                board[9] = ("%c", X[0]);
            }
            if (x_row == 3 && x_collum == 3)
            {
                board[10] = ("%c", X[0]);
            }
            if (o_row == 1 && o_collum == 1)
            {
                board[0] = ("%c", O[0]);
            }
            if (o_row == 1 && o_collum == 2)
            {
                board[1] = ("%c", O[0]);
            }
            if (o_row == 1 && o_collum == 3)
            {
                board[2] = ("%c", O[0]);
            }
            if (o_row == 2 && o_collum == 1)
            {
                board[4] = ("%c", O[0]);
            }
            if (o_row == 2 && o_collum == 2)
            {
                board[5] = ("%c", O[0]);
            }
            if (o_row == 2 && o_collum == 3)
            {
                board[6] = ("%c", O[0]);
            }
            if (o_row == 3 && o_collum == 1)
            {
                board[8] = ("%c", O[0]);
            }
            if (o_row == 3 && o_collum == 2)
            {
                board[9] = ("%c", O[0]);
            }
            if (o_row == 3 && o_collum == 3)
            {
                board[10] = ("%c", O[0]);
            }
            printf("%c", board[i]);
        }
    }
    return;
}

// char print_board_def(void)
// {
//     int board_len = strlen(board);
//     for (int i=0; i<= board_len; ++i)
//         {
//             if (x_row == 1 && x_collum == 1)
//             {
//                 board[0] = ("%c", X[0]);
//             }
//             if (x_row == 1 && x_collum == 2)
//             {
//                 while (i == 1)
//                 {
//                     printf("%c", X[0]);
//                     ++i;
//                 }
            
//             }
//             if (x_row == 1 && x_collum == 3)
//             {
//                 while (i == 2)
//                 {
//                     printf("%c", X[0]);
//                     ++i;
//                 }
            
//             }
//             if (x_row == 2 && x_collum == 1)
//             {
//                 while (i == 4)
//                 {
//                     printf("%c", X[0]);
//                     ++i;
//                 }
            
//             }
//             if (x_row == 2 && x_collum == 2)
//             {
//                 while (i == 5)
//                 {
//                     printf("%c", X[0]);
//                     ++i;
//                 }
            
//             }
//             if (x_row == 2 && x_collum == 3)
//             {
//                 while (i == 6)
//                 {
//                     printf("%c", X[0]);
//                     ++i;
//                 }
            
//             }
//             if (x_row == 3 && x_collum == 1)
//             {
//                 while (i == 8)
//                 {
//                     printf("%c", X[0]);
//                     ++i;
//                 }
            
//             }
//             if (x_row == 3 && x_collum == 2)
//             {
//                 while (i == 9)
//                 {
//                     printf("%c", X[0]);
//                     ++i;
//                 }
            
//             }
//             if (x_row == 3 && x_collum == 3)
//             {
//                 while (i == 10)
//                 {
//                     printf("%c", X[0]);
//                     ++i;
//                 }
            
//             }
//             // else;
//             // {
//                 printf("%c", board[i]);
//             // }
//         }
// }



    
