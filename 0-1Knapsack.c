#include<stdio.h>
int maximum(int val1,int val2){
    return (val1>val2)? val1 :val2;
}
int knapsack(int capacity,int weight[],int value[],int item){

    if(item==0 || capacity==0){
        return 0;
    }
    else if(weight[item-1]>capacity){
        return knapsack(capacity,weight,value,item-1);
    }
    else{
        return maximum(value[item-1]+knapsack(capacity-weight[item-1],weight,value,item-1),knapsack(capacity,weight,value,item-1));
    }
}
int main(){
    int value[]={10,40,30,20};
    int weight[]={5,4,6,3};
    int capacity=10;
    int item=sizeof(value)/sizeof(value[0]);

    printf("%d",knapsack(capacity,weight,value,item));
    return 0;
}
