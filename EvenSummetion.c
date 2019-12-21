#include <stdio.h>
int summation(int value){


    if(value==0){
        return 0;
    }
    else if(value%2==0){
        return value+summation(value-1);
    }
    else{
        return summation(value-1);
    }

}
int main(){
int sum;
int number;

printf("enter a Even number :");
scanf("%d",&number);

sum=summation(number);
printf("Even summation number is: %d",sum);
return 0;

}
