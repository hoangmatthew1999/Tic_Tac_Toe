//============================================================================
// Name        : Tick_Tac_Toe.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int grid [3][3] = {{0,0,0}, {0,0,0}, {0,0,0}};
	int row;
	int column;
	int player_num = 1;
	int exit_status = 1;

	cout << "Its player"<<player_num<<"'s turn"<<endl;
	cout << "What row do you want to place your move "<<endl;
	cin >> row;
	row = row - 1;

	cout << "What column do you want to place your move "<<endl;
	cin >> column;
	column = column - 1;
	if (player_num = 1)
		grid[row][column] = 1;
	else
		grid[row][column] = 2;

	for (int r = 0; r <= 2; r++){
		cout << endl;
		for(int c = 0; c <= 2; c++)
			cout << grid[r][c]<< " ";
	}
	if (player_num = 1)
		player_num = 2;
	else
		player_num = 1;

	//check for winners
	//check for rows
	int not_in_row = -1;
	int in_a_row_count = 0;
	while(not_in_row == -1)
	{
		for(int i = 0; i < 2; i++)
		{

			for (int j = 0; j < 2; j++)
			{
				if(grid[i][j] == 1)
				{
					in_a_row_count++;
				}
				else
				{
					not_in_row = 1;
				}
			}
			if(in_a_row_count == 3)
			{
				cout << "Player "<<  player_num << " wins!" << endl;
				exit(1);
			}
		}
	}

	//check columns for columns
	in_a_row_count = 0;
	not_in_row = -1;
	while(not_in_row == -1)
	{
		for(int i = 0; i < 2; i++)
		{

			for (int j = 0; j < 2; j++)
			{
				if(grid[j][i] == 1)
				{
					in_a_row_count++;
				}
				else
				{
					not_in_row = 1;
				}
			}
			if(in_a_row_count == 3)
			{
				cout << "Player "<<  player_num << " wins!" << endl;
				exit(2);
			}
		}
	}

	//check for diagonal wins
	in_a_row_count = 0;
	not_in_row = -1;



	return 0;
}
