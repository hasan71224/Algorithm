#include<stdio.h>
#include<limits.h>
#define vertex 5
#define s 0
#define Nil -1

int graph[vertex][vertex];
int v_distance[vertex];
int v_parent[vertex];
int S[vertex];
int Q[vertex];
int u,v;

void initialize(int source){
    for( v=0;v<vertex;v++){
            v_distance[v]=INT_MAX;
            v_parent[v]= Nil;
    }
    v_distance[source]=0;
}

int Extract_Min(){
    int Min_distance = INT_MAX;

    for( v=0;v<vertex;v++){
        if(Q[v]==1){
          if(v_distance[v]<Min_distance){
              Min_distance = v_distance[v];
              u = v;
          }
        }
    }
    Q[u] = 0;
    return u;
}
void Relax( u, v){
    if(v_distance[v]>(v_distance[u]+graph[u][v])){
        v_distance[v]=v_distance[u]+graph[u][v];
        v_parent[v]=u;
    }
}
void dijkstra(int source){
    //Calling the Initialize function
    initialize(source);

    //Initializing the S set with null values
    for( v=0;v<vertex;v++){
        S[v]=0;
    }
    //Initializing the Q set with all the vertex....
    for(int v=0;v<vertex;v++){
        Q[v]=1;
    }
    int zero_counter=0;

    while(1){

        //breaking condition for the loop - count the number of zeros in Q set, if it is equal to the number of vertex then break the loop

        for( v=0;v<vertex;v++){
            if(Q[v]==0)
                zero_counter++;
        }
        if(zero_counter==vertex)
            break;
        u = Extract_Min();
        S[u] = 1;
        for(int column = 0;column<vertex;column++){
            if(graph[u][column]!=0){
                Relax(u,column);
            }
        }
    }
}
int main(){
    //inputting the Weight matrix of the graph
    for(int row=0;row<vertex;row++){
        for(int column=0;column<vertex;column++){
            printf("Enter edge weight for W[%d][%d]",row,column);
            scanf("%d",&graph[row][column]);
        }
    }
    //Calling the Dijkstra function with the source vertex
    dijkstra(s);
}
