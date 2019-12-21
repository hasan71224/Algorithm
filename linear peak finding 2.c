#include<stdio.h>
void main()
{
    int mid,number,array[10];
    int total_peak=0;
    printf("enter ten number:\n");
    for(number=0;number<10;number++){
        scanf("%d",&array[number]);
    }
    if(array[0]>=array[1]){
        total_peak=array[0];
        printf("1st value is a peak:\n");
        printf("peak value is:-%d",total_peak);
    }
    else if(array[9]>=array[8]){
        total_peak=array[9];
        printf("Last value is a peak:\n");
        printf("peak value is:-%d",total_peak);
    }
    else{
        for(mid=1;mid<8;mid++){
            if(array[mid]>=array[mid+1]&&array[mid]>=array[mid-1]){
                total_peak=array[mid];
                printf("mid value is a peak:\n");
                printf("peak value is :-%d",total_peak);
            }
        }
    }
}



