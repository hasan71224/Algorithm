#include<stdio.h>
    int price[100];
    int weight[100];
    int capacity;
    int item;
    int counter;

int maximum(int val1,int val2){
    return (val1>val2)? val1 :val2;
}
int knapsack(int capacity,int weight[],int price[],int item){

    if(item==0 || capacity==0){
        return 0;
    }
    else if(weight[item-1]>capacity){
        return knapsack(capacity,weight,price,item-1);
    }
    else{
        return maximum(price[item-1]+knapsack(capacity-weight[item-1],weight,price,item-1),knapsack(capacity,weight,price,item-1));
    }
}
int main(){
    printf("enter number of item:");
    scanf("%d",&item);
    printf("enter weight and price of item....\n");
    for(counter=0;counter<item;counter++){
        printf("enter weight of item %d :\n",counter+1);
        scanf("%d",&weight[counter]);
        printf("enter price of item %d :\n",counter+1);
        scanf("%d",&price[counter]);
    }
    printf("enter capacity of your knapsack :");
    scanf("%d",&capacity);

    printf("your total fee in this knapsack:%d", knapsack(capacity,weight,price,item));
    return 0;
}
