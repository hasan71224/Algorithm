#include<stdio.h>

void DFS(int);
int Graph[10][10],visited[10],number;

void main()
{
    int row,column;
    printf("Enter number of vertex:");

	scanf("%d",&number);

    //enter adjacency matrix.......
	printf("\nEnter adjacency matrix of the graph:");
    //enter value....
	for(row=0;row<number;row++)
       for(column=0;column<number;column++)
			scanf("%d",&Graph[row][column]);

    //visited is initialized to zero
   for(row=0;row<number;row++)
        visited[row]=0;

    DFS(0);
}

void DFS(int row)
{
    int column;
	printf("\n%d",row);
    visited[row]=1;

	for(column=0;column<number;column++)
       if(!visited[column]==0&&Graph[row][column]==1)
            DFS(column);
}
