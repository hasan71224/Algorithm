/*#include<stdio.h>
int calculation(int fac_number){
if(fac_number==0 || fac_number==1){
    return 1;
}
else{
    return fac_number*calculation(fac_number-1);
}
}
void main(){
    int number,factorial;
    printf("enter a number for factorial:");
    scanf("%d",&number);
    factorial=calculation(number);
    printf("factorial ans is:%d",factorial);

}*/


/*#include <stdio.h>
int calculate(int sum_number){
    if(sum_number==1){
        return 1;
    }
    else{
        return sum_number+calculate(sum_number-1);
    }


    }

void main(){
int summation,number;
printf("enter a number for summation:");
scanf("%d",&number);
summation=calculate(number);
printf("summation number is:%d",summation);

}
*/

#include <stdio.h>
int calculation(int even_number){
    if(even_number==0){
        return 0;
    }
    else if(even_number%2==0){
        return even_number+calculation(even_number-1);

    }
    else{
        return calculation(even_number-1);
    }


}

void main(){
    int number,even_summation;
    printf("enter a number for even summation:");
    scanf("%d",&number);
    even_summation=calculation(number);
    printf("even number is %d",even_summation);
}
