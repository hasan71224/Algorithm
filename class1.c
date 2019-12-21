#include<stdio.h>
void main()
{
    int number,array[10];
    int total_peak=0;
    printf("enter ten number less then 100:\n");
    for(number=0;number<10;number++){
        scanf("%d",&array[number]);
    }
    for(number=0;number<8;number++){
        if(array[number+1]>array[number] && array[number+1]>array[number+2]){
            printf("peak value: %d\n",array[number+1]);
            total_peak=total_peak+1;
        }
    }
    printf("\ntotal peak is:%d",total_peak);
}
