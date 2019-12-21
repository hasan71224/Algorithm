#include <stdio.h>
int value[100],n,mid;
int linear_finding( int num, int lower,int uper){
    mid=(uper+lower)/2;
    if(value[mid]==num){
        return mid;
    }
     else if(value[mid]<num){
        linear_finding(num,mid+1,uper);
    }
    else if(value[mid]>num){
        linear_finding(num,lower,mid-1);
    }
}
int main()
{
    int counter;
    int find,number;
    printf("enter how many number you count:");
    scanf("%d",&n);
    for(counter=0;counter<n;counter++){
        printf("enter number of value %d:",counter+1);
        scanf("%d",&value[counter]);
    }
    printf("how number you find:");
    scanf("%d",&number);
    find=linear_finding(number,n-n,n-1);
    printf("searching value position is:%d",find+1);
}







