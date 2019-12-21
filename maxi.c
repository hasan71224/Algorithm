#include<stdio.h>
int a[2000];
int maximum;

int max(int upperlimit){
    if(upperlimit==0){
        maximum=a[upperlimit];
        return a[upperlimit];
    }
    else{
        if(a[upperlimit]>max(upperlimit-1)){
            maximum=a[upperlimit];
            return maximum;
        }
        else{
            return maximum;
        }
    }
}

int main(){
    int maxi,number,index;
    printf("enter array size:");
    scanf("%d",&number);
    printf("enter value for array:\n");
    for(index=0;index<number;index++){
    scanf("%d",&a[index]);
    }
    maxi=max(number-1);
    printf("maximum number is :%d",maxi);
    return 0;
}


