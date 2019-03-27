#include <stdio.h>
#include <stdlib.h>

struct point{
        int flip_count;
        int stone_point;
};
typedef struct point point;

void add_point_stone_player1(int board_size , char **board , point board_of_point[board_size][board_size] ,int row , int column , int move_value[])
{
	int i,j,k,l;

			if(board[row-1][column-1]=='O')
			{
			for(i=row-1 , j=column-1 ; board[i][j]!='_' ; i-- , j--)
				{
				if(board[i][j]=='X')
					{
						for(k=row-1 , l=column-1 ; board[k][l]!='X' ; k-- , l--)
						{
							board_of_point[k][l].stone_point+=move_value[0];
						}
					}
				if(i<0)
					break;
                if(j<0)
					break;
				}
			}
			if(board[row-1][column]=='O')
			{
			for(i=row-1 ; board[i][column]!='_' ; i--)
				{
				if(board[i][column]=='X')
					{
						for(j=row-1 ; board[j][column]!='X' ; j--)
						{
                            board_of_point[j][column].stone_point+=move_value[0];
						}
					}
                if(i<0)
				break;
				}
			}
			if(board[row-1][column+1]=='O')
			{
			for(i=row-1 , j=column+1 ; board[i][j]!='_' ; i-- , j++)
				{
				if(board[i][j]=='X')
					{

						for(k=row-1 , l=column+1 ; board[k][l]!='X' ; k-- , l++)
						{
							board_of_point[k][l].stone_point+=move_value[0];
						}
					}
                if(i<0)
				break;
            if(j>board_size-1)
				break;
				}
			}
			if(board[row][column-1]=='O')
			{
			for(i=column-1 ; board[row][i]!='_' ; i--)
				{
				if(board[row][i]=='X')
					{

						for(j=column-1 ; board[row][j]!='X' ; j--)
						{
							board_of_point[row][j].stone_point+=move_value[0];
						}
					}
                if(i<0)
				break;
				}
			}
			if(board[row][column+1]=='O')
			{
			for(i=column+1 ; board[row][i]!='_'  ; i++)
				{
				if(board[row][i]=='X')
					{
						for(j=column+1 ; board[row][j]!='X' ; j++)
						{
							board_of_point[row][j].stone_point+=move_value[0];
						}
					}
                if(i>board_size-1)
				break;
				}
			}
			if(board[row+1][column-1]=='O')
			{
			for(i=row+1 , j=column-1 ; board[i][j]!='_' ; i++ , j--)
				{
				if(board[i][j]=='X')
					{
						for(k=row+1 , l=column-1 ; board[k][l]!='X' ; k++ , l--)
						{
							board_of_point[k][l].stone_point+=move_value[0];
						}
					}
                if(i>board_size-1)
				break;
            if(j<0)
				break;
				}
			}
			if(board[row+1][column]=='O')
			{
			for(i=row+1 ; board[i][column]!='_'  ; i++)
				{
				if(board[i][column]=='X')
					{
						for(j=row+1 ; board[j][column]!='X' ; j++)
						{
							board_of_point[j][column].stone_point+=move_value[0];
						}
					}
                 if(i>board_size-1)
				break;
				}
			}
			if(board[row+1][column+1]=='O')
			{
			for(i=row+1 , j=column+1 ; board[i][j]!='_'  ; i++ , j++)
				{
				if(board[i][j]=='X')
					{
						for(k=row+1 , l=column+1 ; board[k][l]!='X' ; k++ , l++)
						{
							board_of_point[k][l].stone_point+=move_value[0];
						}
					}
                if(i>board_size-1)
				break;
            if(j>board_size-1)
				break;
				}
			}

	return ;
}
void add_point_stone_player2(int board_size , char **board , point board_of_point[board_size][board_size] , int row , int column , int move_value[])
{
	int i,j,k,l;

			if(board[row-1][column-1]=='X')
			{
			for(i=row-1 , j=column-1 ; board[i][j]!='_' ; i-- , j--)
				{
				if(board[i][j]=='O')
					{
						for(k=row-1 , l=column-1 ; board[k][l]!='O' ; k-- , l--)
						{
							board_of_point[k][l].stone_point+=move_value[1];
						}
					}
				if(i<0)
					break;
                if(j<0)
					break;
				}
			}
			if(board[row-1][column]=='X')
			{
			for(i=row-1 ; board[i][column]!='_' ; i--)
				{
				if(board[i][column]=='O')
					{
						for(j=row-1 ; board[j][column]!='O' ; j--)
						{
                            board_of_point[j][column].stone_point+=move_value[1];
						}
					}
                if(i<0)
				break;
				}
			}
			if(board[row-1][column+1]=='X')
			{
			for(i=row-1 , j=column+1 ; board[i][j]!='_' ; i-- , j++)
				{
				if(board[i][j]=='O')
					{

						for(k=row-1 , l=column+1 ; board[k][l]!='O' ; k-- , l++)
						{
							board_of_point[k][l].stone_point+=move_value[1];
						}
					}
                if(i<0)
				break;
            if(j>board_size-1)
				break;
				}
			}
			if(board[row][column-1]=='X')
			{
			for(i=column-1 ; board[row][i]!='_' ; i--)
				{
				if(board[row][i]=='O')
					{

						for(j=column-1 ; board[row][j]!='O' ; j--)
						{
							board_of_point[row][j].stone_point+=move_value[1];
						}
					}
                if(i<0)
				break;
				}
			}
			if(board[row][column+1]=='X')
			{
			for(i=column+1 ; board[row][i]!='_'  ; i++)
				{
				if(board[row][i]=='O')
					{
						for(j=column+1 ; board[row][j]!='O' ; j++)
						{
							board_of_point[row][j].stone_point+=move_value[1];
						}
					}
                if(i>board_size-1)
				break;
				}
			}
			if(board[row+1][column-1]=='X')
			{
			for(i=row+1 , j=column-1 ; board[i][j]!='_' ; i++ , j--)
				{
				if(board[i][j]=='O')
					{
						for(k=row+1 , l=column-1 ; board[k][l]!='O' ; k++ , l--)
						{
							board_of_point[k][l].stone_point+=move_value[1];
						}
					}
                if(i>board_size-1)
				break;
            if(j<0)
				break;
				}
			}
			if(board[row+1][column]=='X')
			{
			for(i=row+1 ; board[i][column]!='_'  ; i++)
				{
				if(board[i][column]=='O')
					{
						for(j=row+1 ; board[j][column]!='O' ; j++)
						{
							board_of_point[j][column].stone_point+=move_value[1];
						}
					}
                 if(i>board_size-1)
				break;
				}
			}
			if(board[row+1][column+1]=='X')
			{
			for(i=row+1 , j=column+1 ; board[i][j]!='_'  ; i++ , j++)
				{
				if(board[i][j]=='O')
					{
						for(k=row+1 , l=column+1 ; board[k][l]!='O' ; k++ , l++)
						{
							board_of_point[k][l].stone_point+=move_value[1];
						}
					}
                if(i>board_size-1)
				break;
            if(j>board_size-1)
				break;
				}
			}

	return ;
}
void move_value_func(int board_size , point board_of_point[board_size][board_size])
{
	int i,j;
	board_of_point[i][j].stone_point++;
}
void fill_flip_0_and_fill_stone_1(int board_size, point board_of_point[board_size][board_size] )
{
	int i,j;
	 for(i=0 ; i<board_size ; i++)
	 {
		 for(j=0 ; j<board_size ; j++)
		 {
			 board_of_point[i][j].flip_count=0;
		 }
	 }
	 for(i=0 ; i<board_size ; i++)
	 {
		 for(j=0 ; j<board_size ; j++)
		 {
			 board_of_point[i][j].stone_point=1;
		 }
	 }
}
int check_board_size(int board_size)
{
	if(board_size<4 || board_size % 2 == 1 )
	{
		printf("Invalid format for command line arguments.The size argument should be an even positive integer number greater then or equal to 4\n");
		return 0;
	}
	else
		return 1;

}
void create_array(int board_size , char **board)
{
    int i;

    for(i=-1 ; i<=board_size ; i++)
    {
        board[i] = (char *) calloc (board_size , sizeof(int));
    }
}
void create_game_board(int board_size , char **board , point board_of_point[board_size][board_size])
{
    int i,j;

	for(i=0 ; i<board_size ; i++)
    {
        for(j=0 ; j<board_size ; j++)
            {
            board[i][j]='_';
            }
    }
	board[board_size/2-1][board_size/2-1]='O';
	board[board_size/2-1][board_size/2]='X';
	board[board_size/2][board_size/2-1]='X';
	board[board_size/2][board_size/2]='O';
	return ;
}
void draw_game_board(int board_size , char **board)
{
	int i,j;

	for(i=0 ; i<board_size ; i++)
    {
        for(j=0 ; j<board_size ; j++)
        {
			printf("%2c" , board[i][j]);
        }
        printf("\n\n");
    }
    return ;
}
void move_player1(int board_size , char **board , point board_of_point[board_size][board_size] ,int move_value[2] )
{
	int i,j,k,l,x_value=0;
	int row , column;
	move_value[0]=0;

	scanf("%d %d" , &row , &column);
	printf("\n");


	if(board[row][column]=='_')
	{
			if(board[row-1][column-1]=='O')
			{
			for(i=row-1 , j=column-1 ; board[i][j]!='_' ; i-- , j--)
				{
				if(board[i][j]=='X')
					{
					board[row][column]='X';
					x_value++;
						for(k=row-1 , l=column-1 ; board[k][l]!='X' ; k-- , l--)
						{
							move_value[0]++;
							board_of_point[k][l].flip_count++;
							if(board_of_point[k][l].flip_count<=4)
							{
								add_point_stone_player1(board_size,board,board_of_point,row ,column,move_value);
							}
							board[k][l]='X';


						}
					}
				if(i<0)
					break;
                if(j<0)
					break;
				}
			}
			if(board[row-1][column]=='O')
			{
			for(i=row-1 ; board[i][column]!='_' ; i--)
				{
				if(board[i][column]=='X')
					{
					board[row][column]='X';
					x_value++;
						for(j=row-1 ; board[j][column]!='X' ; j--)
						{
							board_of_point[j][column].flip_count++;
							move_value[0]++;
							if(board_of_point[j][column].flip_count<=4)
							{
								add_point_stone_player1(board_size,board,board_of_point,row ,column,move_value);
							}
							board[j][column]='X';

						}
					}
                if(i<0)
				break;
				}
			}
			if(board[row-1][column+1]=='O')
			{
			for(i=row-1 , j=column+1 ; board[i][j]!='_' ; i-- , j++)
				{
				if(board[i][j]=='X')
					{
					board[row][column]='X';
					x_value++;
						for(k=row-1 , l=column+1 ; board[k][l]!='X' ; k-- , l++)
						{
							board_of_point[k][l].flip_count++;
							move_value[0]++;
							if(board_of_point[k][l].flip_count<=4)
							{
								add_point_stone_player1(board_size,board,board_of_point,row ,column,move_value);
							}
							board[k][l]='X';

						}
					}
                if(i<0)
				break;
            if(j>board_size-1)
				break;
				}
			}
			if(board[row][column-1]=='O')
			{
			for(i=column-1 ; board[row][i]!='_' ; i--)
				{
				if(board[row][i]=='X')
					{
					board[row][column]='X';
					x_value++;
						for(j=column-1 ; board[row][j]!='X' ; j--)
						{
							board_of_point[row][j].flip_count++;
							move_value[0]++;
							if(board_of_point[row][j].flip_count<=4)
							{
								add_point_stone_player1(board_size,board,board_of_point,row ,column,move_value);
							}
							board[row][j]='X';

						}
					}
                if(i<0)
				break;
				}
			}
			if(board[row][column+1]=='O')
			{
			for(i=column+1 ; board[row][i]!='_'  ; i++)
				{
				if(board[row][i]=='X')
					{
					board[row][column]='X';
					x_value++;
						for(j=column+1 ; board[row][j]!='X' ; j++)
						{
							board_of_point[row][j].flip_count++;
							move_value[0]++;
							if(board_of_point[row][j].flip_count<=4)
							{
								add_point_stone_player1(board_size,board,board_of_point,row ,column,move_value);
							}
							board[row][j]='X';

						}
					}
                if(i>board_size-1)
				break;
				}
			}
			if(board[row+1][column-1]=='O')
			{
			for(i=row+1 , j=column-1 ; board[i][j]!='_' ; i++ , j--)
				{
				if(board[i][j]=='X')
					{
					board[row][column]='X';
					x_value++;
						for(k=row+1 , l=column-1 ; board[k][l]!='X' ; k++ , l--)
						{
							board_of_point[k][l].flip_count++;
							move_value[0]++;
							if(board_of_point[k][l].flip_count<=4)
							{
								add_point_stone_player1(board_size,board,board_of_point,row ,column,move_value);
							}
							board[k][l]='X';

						}
					}
                if(i>board_size-1)
				break;
            if(j<0)
				break;
				}
			}
			if(board[row+1][column]=='O')
			{
			for(i=row+1 ; board[i][column]!='_'  ; i++)
				{
				if(board[i][column]=='X')
					{
					board[row][column]='X';
					x_value++;
						for(j=row+1 ; board[j][column]!='X' ; j++)
						{
							board_of_point[j][column].flip_count++;
							move_value[0]++;
							if(board_of_point[j][column].flip_count<=4)
							{
								add_point_stone_player1(board_size,board,board_of_point,row ,column,move_value);
							}
							board[j][column]='X';

						}
					}
                 if(i>board_size-1)
				break;
				}
			}
			if(board[row+1][column+1]=='O')
			{
			for(i=row+1 , j=column+1 ; board[i][j]!='_'  ; i++ , j++)
				{
				if(board[i][j]=='X')
					{
					board[row][column]='X';
					x_value++;
						for(k=row+1 , l=column+1 ; board[k][l]!='X' ; k++ , l++)
						{
							board_of_point[k][l].flip_count++;
							move_value[0]++;
							if(board_of_point[k][l].flip_count<=4)
							{
								add_point_stone_player1(board_size,board,board_of_point,row ,column,move_value);
							}
							board[k][l]='X';

						}
					}
                if(i>board_size-1)
				break;
            if(j>board_size-1)
				break;
				}
			}

		if(x_value==0)
        {
		printf("Invalid move.Please make another move:");
		move_player1(board_size,board,board_of_point,move_value);
        }
	}
	else
	{
		printf("Invalid move.Please make another move:");
		move_player1(board_size,board,board_of_point ,move_value);
	}



	return ;
}
void move_player2(int board_size , char **board , point board_of_point[board_size][board_size], int move_value[2]  )
{
	int i,j,k,l,o_value=0;
	int row , column;
	move_value[1]=0;

	scanf("%d %d" , &row , &column);
	printf("\n");

	if(board[row][column]=='_')
	{
			if(board[row-1][column-1]=='X')
			{
			for(i=row-1 , j=column-1 ; board[i][j]!='_' ; i-- , j--)
				{
				if(board[i][j]=='O')
					{
					board[row][column]='O';
					o_value++;
						for(k=row-1 , l=column-1 ; board[k][l]!='O' ; k-- , l--)
						{
							board_of_point[k][l].flip_count++;
							move_value[1]++;
							if(board_of_point[k][l].flip_count<=4)
							{
							add_point_stone_player2(board_size,board,board_of_point,row,column,move_value);
							}
							board[k][l]='O';

						}
					}
                if(i<0)
					break;
                if(j<0)
					break;
				}
			}
			if(board[row-1][column]=='X')
			{
			for(i=row-1 ; board[i][column]!='_' ; i--)
				{
				if(board[i][column]=='O')
					{
					board[row][column]='O';
					o_value++;
						for(j=row-1 ; board[j][column]!='O' ; j--)
						{
							board_of_point[j][column].flip_count++;
							move_value[1]++;
							if(board_of_point[j][column].flip_count<=4)
							{
							add_point_stone_player2(board_size,board,board_of_point,row,column,move_value);
							}
							board[j][column]='O';

						}
					}
				if(i<0)
					break;
				}
			}
			if(board[row-1][column+1]=='X')
			{
			for(i=row-1 , j=column+1 ; board[i][j]!='_' ; i-- , j++)
				{
				if(board[i][j]=='O')
					{
					board[row][column]='O';
					o_value++;
						for(k=row-1 , l=column+1 ; board[k][l]!='O' ; k-- , l++)
						{
							board_of_point[k][l].flip_count++;
							move_value[1]++;
							if(board_of_point[k][l].flip_count<=4)
							{
							add_point_stone_player2(board_size,board,board_of_point,row,column,move_value);
							}
							board[k][l]='O';

						}
					}
                if(i<0)
					break;
                if(j>board_size-1)
					break;
				}
			}
			if(board[row][column-1]=='X')
			{
			for(i=column-1 ; board[row][i]!='_' || i>=0 ; i--)
				{
				if(board[row][i]=='O')
					{
					board[row][column]='O';
					o_value++;
						for(j=column-1 ; board[row][j]!='O' ; j--)
						{
							board_of_point[row][j].flip_count++;
							move_value[1]++;
							if(board_of_point[row][j].flip_count<=4)
							{
							add_point_stone_player2(board_size,board,board_of_point,row,column,move_value);
							}
							board[row][j]='O';

						}
					}
                if(i<0)
				break;
				}

			}
			if(board[row][column+1]=='X')
			{
			for(i=column+1 ; board[row][i]!='_' ; i++)
				{
				if(board[row][i]=='O')
					{
					board[row][column]='O';
					o_value++;
						for(j=column+1 ; board[row][j]!='O' ; j++)
						{
							board_of_point[row][j].flip_count++;
							move_value[1]++;
							if(board_of_point[row][j].flip_count<=4)
							{
							add_point_stone_player2(board_size,board,board_of_point,row,column,move_value);
							}
							board[row][j]='O';

						}
					}
                if(i>board_size-1)
					break;
				}
			}
			if(board[row+1][column-1]=='X')
			{
			for(i=row+1 , j=column-1 ; board[i][j]!='_'  ; i++ , j--)
				{
				if(board[i][j]=='O')
					{
					board[row][column]='O';
					o_value++;
						for(k=row+1 , l=column-1 ; board[k][l]!='O' ; k++ , l--)
						{
							board_of_point[k][l].flip_count++;
							move_value[1]++;
							if(board_of_point[k][l].flip_count<=4)
							{
							add_point_stone_player2(board_size,board,board_of_point,row,column,move_value);
							}
							board[k][l]='O';

						}
					}
                if(i>board_size-1)
					break;
                if(j<0)
					break;
				}
			}
			if(board[row+1][column]=='X')
			{
			for(i=row+1 ; board[i][column]!='_' ; i++)
				{
				if(board[i][column]=='O')
					{
					board[row][column]='O';
					o_value++;
						for(j=row+1 ; board[j][column]!='O' ; j++)
						{
							board_of_point[j][column].flip_count++;
							move_value[1]++;
							if(board_of_point[j][column].flip_count<=4)
							{
							add_point_stone_player2(board_size,board,board_of_point,row,column,move_value);
							}
							board[j][column]='O';

						}
					}
                if(i>board_size-1)
					break;
				}
			}
			if(board[row+1][column+1]=='X')
			{
			for(i=row+1 , j=column+1 ; board[i][j]!='_' ; i++ , j++)
				{
				if(board[i][j]=='O')
					{
					board[row][column]='O';
					o_value++;
						for(k=row+1 , l=column+1 ; board[k][l]!='O' ; k++ , l++)
						{
							board_of_point[k][l].flip_count++;
							move_value[1]++;
							if(board_of_point[k][l].flip_count<=4)
							{
							add_point_stone_player2(board_size,board,board_of_point,row,column,move_value);
							}
							board[k][l]='O';

						}
					}
                if(i>board_size-1)
				break;
            if(j>board_size-1)
				break;
				}
			}

        if(o_value==0)
        {
		printf("Invalid move.Please make another move:");
		move_player2(board_size,board,board_of_point,move_value);
        }
	}
	else
	{
		printf("Invalid move.Please make another move:");
		move_player2(board_size,board,board_of_point ,move_value);
	}


	return ;
}
int no_move_player1(int board_size , char **board)
{
	int i,j,k,l;

	for(i=0 ; i<board_size ; i++)
    {
        for(j=0 ; j<board_size ; j++)
        {
			if(board[i][j]=='_')
			{
				if(board[i-1][j-1]=='O')
				{
				for(k=i-1 , l=j-1 ; board[k][l]!='_' ; k-- , l--)
					{
					if(board[k][l]=='X')
							return 1;

					if(k<0)
						break;
					if(l<0)
						break;
					}
				}
				if(board[i-1][j]=='O')
				{
				for(k=i-1 ; board[k][j]!='_' ; k--)
					{
					if(board[k][j]=='X')
						return 1;

					if(k<0)
					break;
					}
				}
				if(board[i-1][j+1]=='O')
				{
				for(k=i-1 , l=j+1 ; board[k][l]!='_' ; k-- , l++)
                    {
					if(board[k][l]=='X')
						return 1;

					if(k<0)
					break;
				if(l>board_size-1)
					break;
					}
				}
				if(board[i][j-1]=='O')
				{
				for(k=j-1 ; board[i][k]!='_' ; k--)
					{
					if(board[i][k]=='X')
						return 1;

					if(k<0)
					break;
					}
				}
				if(board[i][j+1]=='O')
				{
				for(k=j+1 ; board[i][k]!='_'  ; k++)
					{
					if(board[i][k]=='X')
						return 1;

					if(k>board_size-1)
					break;
					}
				}
				if(board[i+1][j-1]=='O')
				{
				for(k=i+1 , l=j-1 ; board[k][l]!='_' ; k++ , l--)
					{
					if(board[k][l]=='X')
						return 1;

					if(k>board_size-1)
					break;
				if(l<0)
					break;
					}
				}
				if(board[i+1][j]=='O')
				{
				for(k=i+1 ; board[k][j]!='_'  ; k++)
					{
					if(board[k][j]=='X')
						return 1;

					if(k>board_size-1)
					break;
					}
				}
				if(board[i+1][j+1]=='O')
				{
					for(k=i+1 , l=j+1 ; board[k][l]!='_'  ; k++ , l++)
					{
					if(board[k][l]=='X')
						return 1;

					if(k>board_size-1)
					break;
				if(l>board_size-1)
					break;
					}
				}

			}
        }

    }

    return 0;
}
int no_move_player2(int board_size , char **board)
{
	int i,j,k,l;

	for(i=0 ; i<board_size ; i++)
    {
        for(j=0 ; j<board_size ; j++)
        {
			if(board[i][j]=='_')
			{
				if(board[i-1][j-1]=='X')
				{
				for(k=i-1 , l=j-1 ; board[k][l]!='_' ; k-- , l--)
					{
					if(board[k][l]=='O')
							return 1;

					if(k<0)
						break;
					if(l<0)
						break;
					}
				}
				if(board[i-1][j]=='X')
				{
				for(k=i-1 ; board[k][j]!='_' ; k--)
					{
					if(board[k][j]=='O')
						return 1;

					if(k<0)
					break;
					}
				}
				if(board[i-1][j+1]=='X')
				{
				for(k=i-1 , l=j+1 ; board[k][l]!='_' ; k-- , l++)
				{
					if(board[k][l]=='O')
						return 1;

					if(k<0)
					break;
				if(l>board_size-1)
					break;
					}
				}
				if(board[i][j-1]=='X')
				{
				for(k=j-1 ; board[i][k]!='_' ; k--)
					{
					if(board[i][k]=='O')
						return 1;

					if(k<0)
					break;
					}
				}
				if(board[i][j+1]=='X')
				{
				for(k=j+1 ; board[i][k]!='_'  ; k++)
					{
					if(board[i][k]=='O')
						return 1;

					if(k>board_size-1)
					break;
					}
				}
				if(board[i+1][j-1]=='X')
				{
				for(k=i+1 , l=j-1 ; board[k][l]!='_' ; k++ , l--)
					{
					if(board[k][l]=='O')
						return 1;

					if(k>board_size-1)
					break;
				if(l<0)
					break;
					}
				}
				if(board[i+1][j]=='X')
				{
				for(k=i+1 ; board[k][j]!='_'  ; k++)
					{
					if(board[k][j]=='O')
						return 1;

					if(k>board_size-1)
					break;
					}
				}
				if(board[i+1][j+1]=='X')
				{
					for(k=i+1 , l=j+1 ; board[k][l]!='_'  ; k++ , l++)
					{
					if(board[k][l]=='O')
						return 1;

					if(k>board_size-1)
					break;
				if(l>board_size-1)
					break;
					}
				}

			}
        }

    }

    return 0;
}
int game_end(int board_size , char **board)
{
    int i,j;
    for(i=0 ; i<=board_size ; i++)
    {
        for(j=0 ; j<=board_size ; j++)
        {
            if(board[i][j]=='_')
              return 1;
        }
   }
   printf("Game ended..\n");
   return 0;
}
void number_of_pieces(int board_size , char **board , int pieces_player[2])
{
	int i,j;

	for(i=0 ; i<board_size ; i++)
	{
		for(j=0 ; j<board_size ; j++)
		{
			if(board[i][j]=='X')
				pieces_player[0]++;

			if(board[i][j]=='O')
				pieces_player[1]++;

		}
	}	
    return ;
}
void point_stone(int board_size , char **board , int points_player[2] , point board_of_point[board_size][board_size])
{
	int i,j;
	for(i=0 ; i<board_size ; i++)
	{
		for(j=0 ; j<board_size ; j++)
		{
			if(board[i][j]=='X')
				points_player[0] +=board_of_point[i][j].stone_point;

			if(board[i][j]=='O')
				points_player[1] +=board_of_point[i][j].stone_point;

		}
	}

}


int main(int argc ,char *argv[])
{
	int i,j,move_value[1];
	int player=1 , end , pieces_player[]={0,0} , points_player[]={0,0}  ,board_size=atoi(argv[1]);
    char **board = (char**) calloc (board_size , sizeof(int));
    point board_of_point[board_size][board_size];
	

	if(check_board_size(board_size)==0)
		return 0;

    create_array(board_size,board);
	create_game_board(board_size,board,board_of_point);
	draw_game_board(board_size,board);
	fill_flip_0_and_fill_stone_1(board_size,board_of_point);

	do{
        if(no_move_player1(board_size,board)==0 && no_move_player2(board_size,board)==0)
        {
            printf("Game ended..\n");
                break;
        }

		if(player==1)
		{
			if(no_move_player1(board_size,board)==1)
			{
				printf("Player 1's turn:");
				move_player1(board_size,board,board_of_point,move_value);
				draw_game_board(board_size,board);
			}
			else
				;
		}
		else
		{
			if(no_move_player2(board_size,board)==1)
			{
				printf("Player 2's turn:");
				move_player2(board_size,board,board_of_point, move_value);
				draw_game_board(board_size,board);
			}
			else
				;
		}
		if(player==1)
			player=2;
		else
			player=1;


		end=game_end(board_size,board);


	}while(end==1);

	number_of_pieces(board_size,  board , pieces_player);
	point_stone(board_size,board,points_player,board_of_point);

	printf("Player 1 : %d , %d\n" , pieces_player[0] , points_player[0]);
	printf("Player 2 : %d , %d\n" , pieces_player[1] , points_player[1]);

    return 0;
}
