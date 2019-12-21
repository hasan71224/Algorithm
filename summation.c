#include <stdio.h>
int summation(int value){
    if(value==1){
        return 1;
    }
    else{
        return value+summation(value-1);
    }

}


int main(){
int sum;
int number;

printf("enter a number :");
scanf("%d",&number);

sum=summation(number);
printf("summation number is: %d",sum);
return 0;

}
