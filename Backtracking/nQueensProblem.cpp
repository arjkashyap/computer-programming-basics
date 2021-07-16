/*
	N Queen Problem
*/

#include<iostream>
#include<vector>

using namespace std;

bool isSafe(vector<vector<int>> board, int row, int col)
{
	// check vertically
	for(int i =0; i < board.size(); i++){
		int j = col;
		if(i == row && j == col)
			continue;
		else if(board[i][j] == 1)
			return false;
	}
	// check horizontally
	for(int j = 0; j < board[row].size(); j++){
		int i = row;
		if(i == row && j == col)
			continue;
		else if(board[i][j] == 1)
			return false;
	}
	
	// check diagonally 
	int i = 0, j = 0;
	while(i < board.size() && j < board.size()){
		if(i == row && j == col)
			continue;
		else if(board[i][j] == 1)
			return false;
		i++;
		j++;
	}
	
	i = board.size() - 1;
	j = 0;
	while(i >= 0 && j < board.size() - 1){
		if(i == row && j == col)
			continue;
		else if(board[i][j] == 1)
			return false;
		i--;
		j++;
	}
	
	return true;
}

bool isPossible(vector<vector<int>>& board, int col = 0)
{
	if(col == board.size()){
		return true;
	}
	
	for(int row = 0; row < board.size(); row++){
		if(isSafe(board, row, col)){
			board[row][col] = 1;    // place the queen
			if(isPossible(board, col+1))
				return true;
			board[row][col] = 0;    // back track
		}
	}
	return false;
}

int main()
{
	// number of rows and cols in our board
	// also represents number of queens we want to place
	int N;
	cin >> N;
	
	vector<int> cols(N, 0);
	vecotr<vector<int>> board;
	
	for(int i = 0; i < N; i++)
		board.push_back(cols);
	
	bool isPossible = canPlaceNQueens(board);
	
	if(isPossible){
		cout << "Yes: " << endl;
		for(auto r : board){
			for (auto c : r)
				cout << c << " ";
		cout << endl;
		}
	}else{
		cout << "Not Possible" << endl;
	}
	
	return 0;
} 