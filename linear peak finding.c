#include<stdio.h>
void main()
{
    int number,array[10];
    int total_peak=0;
    printf("enter ten number:\n");
    for(number=0;number<10;number++){
        scanf("%d",&array[number]);
    }
    array[-1]=0;
    for(number=0;number<10;number++){
        if(array[number]>array[number-1] && array[number]>array[number+1]){
            printf("peak value: %d\n",array[number]);
            total_peak=total_peak+1;
        }
    }
    printf("\ntotal peak is:%d",total_peak);
}

