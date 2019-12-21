#define Number 4
#include<stdio.h>
#include<stdbool.h>
void printSolution(int board[Number][Number])
{
    //for row......
	for (int i = 0; i < Number; i++)
	{
	    //for column......
		for (int j = 0; j < Number; j++)
			printf(" %d ", board[i][j]);
            printf("\n");
	}
}
bool isSafe(int board[Number][Number], int row, int col)
{
	int i, j;

	// Check this row on left side
	for (i = 0; i < col; i++)
		if (board[row][i])
			return false;

	//Check upper diagonal on left side
	for (i=row, j=col; i>=0 && j>=0; i--, j--)
		if (board[i][j])

			return false;

	/* Check lower diagonal on left side */
	for (i=row, j=col; j>=0 && i<Number; i++, j--)
		if (board[i][j])

			return false;

	return true;
}
//A recursive utility function to solve N Queen problem
bool solveNQUtil(int board[Number][Number], int col)
{
	/* base case: If all queens are placed
	then return true */
	if (col >= Number)

		return true;

	/* Consider this column and try placing
	this queen in all rows one by one */
	for (int i = 0; i < Number; i++)
	{
		/* Check if the queen can be placed on
		board[i][col] */
		if ( isSafe(board, i, col) )
		{
			/* Place this queen in board[i][col] */
			board[i][col] = 1;

			/* recur to place rest of the queens */
			if ( solveNQUtil(board, col + 1) )

				return true;
			board[i][col] = 0; // BACKTRACK
		}
	}
	return false;
}
bool solveNQ()
{
	int board[Number][Number] = { {0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};

	if ( solveNQUtil(board, 0) == false ){
        printf("solution is:");
        printf("Solution does not exist");
        return false;
	}
    printf("solution is:\n");
	printSolution(board);
	return true;
}
// driver program to test above function
int main()
{
	solveNQ();
	return 0;
}

