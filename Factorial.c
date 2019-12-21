#include <stdio.h>
int calculation(int fact_number){
    if(fact_number==0 || fact_number==1){
        return 1;
    }
    else{
        return fact_number*calculation(fact_number-1);
    }

}

int main(){
    int factorial;
    int number;

    printf("enter a number for calculate factorial :");
    scanf("%d",&number);

    factorial=calculation(number);
    printf("factorial number is:%d",factorial);
    return 0;
}

