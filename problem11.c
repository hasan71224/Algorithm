#include <stdio.h>
#include <stdlib.h>
//ADJACENCY MATRIX
int source,Vertex,Edge,time,visited[20],Graph[20][20];
void DFS(int i){
    int j;
    visited[i]=1;
    printf(" %d->",i+1);
    for(j=0;j<Vertex;j++){
        if(Graph[i][j]==1&&visited[j]==0)
            DFS(j);
    }
}
int main(){
    int counter,counter2,v1,v2;
    printf("Enter the no of edges:");
    scanf("%d",&Edge);
    printf("Enter the no of vertex:");
    scanf("%d",&Vertex);
    //for edges and vertex.........
    for(counter=0;counter<Vertex;counter++)
    {
        for(counter2=0;counter2<Vertex;counter2++)
            Graph[counter][counter2]=0;
    }
    //creating edges
    for(counter=0;counter<Edge;counter++){
        printf("Enter the edges (format: Vertex1 Vertex2) : ");
        scanf("%d%d",&v1,&v2);
        Graph[v1-1][v2-1]=1;
    }
    for(counter=0;counter<Vertex;counter++){
        for(counter2=0;counter2<Vertex;counter2++)
            printf(" %d ",Graph[counter][counter2]);
            printf("\n");
    }
    printf("Enter the source: ");
    scanf("%d",&source);
    DFS(source-1);
    return 0;
}
