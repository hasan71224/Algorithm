#include <stdio.h>
int value[100],n,mid,peak;
int binary_peak_finding(int lower,int uper){
    mid=(lower+uper)/2;
    if((mid-1)>0&&mid+1<n){
        if(value[mid]<value[mid-1]){
            binary_peak_finding(lower,mid-1);
        }
        else if(value[mid]<value[mid+1]){
            binary_peak_finding(mid+1,uper);
        }
       else{
            return value[mid];
        }
    }
    else{
        return value[mid];
    }
}
int main(){
    int counter;
    printf("enter how many number you count:");
    scanf("%d",&n);
    for(counter=0;counter<n;counter++){
        printf("enter number of value %d:",counter+1);
        scanf("%d",&value[counter]);
    }
    peak=binary_peak_finding(n-n,(n-1));
    printf("peak value is:%d",peak);
}

